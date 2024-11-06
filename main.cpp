#include <iostream>
#include <fstream>
#include <vector>
#include "foo.h"

int main()
{
    std::ifstream file("/data/local/tmp/qr.yuv", std::ios::binary);

    file.seekg(0, std::ios::end);
    std::streamsize fileSize = file.tellg();
    file.seekg(0, std::ios::beg);

    std::vector<char> imageBuffer(fileSize);
    file.read(imageBuffer.data(), fileSize);
    std::cout << "Размер изображения: " << imageBuffer.size() << " байт" << std::endl;
    file.close();

    void *recognizer = saiv_vision_barcode_recognizer_init(ImageCaptureMode::StillPhoto, RecognitionTarget::All);

    saiv_vision_barcode_recognizer_set_image_size(recognizer, 300, 300);

    int result = saiv_vision_barcode_recognizer_process(recognizer, imageBuffer.data());
    std::cout << "Результат обработки кадра: " << result << std::endl;

    auto objectCount = saiv_vision_barcode_recognizer_get_recognized_object_count(recognizer);
    std::cout << "Количество распознанных объектов: " << objectCount << std::endl;

    if (objectCount > 0)
    {
        auto qrText = saiv_vision_barcode_recognizer_get_recognized_object_text(recognizer, 0);
        std::cout << "Распознанный QR-код: " << qrText << std::endl;
    }
    else
    {
        std::cout << "QR-код не найден.." << std::endl;
    }
    saiv_vision_barcode_recognizer_release(recognizer);
    return 0;
}
