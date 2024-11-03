#include <cstdint>

extern "C"
{
    void *saiv_vision_barcode_recognizer_init(uint32_t mode, uint32_t target);
    uint64_t saiv_vision_barcode_recognizer_set_image_size(void *recognizer, int32_t width, int32_t height);
    uint64_t saiv_vision_barcode_recognizer_process(void *recognizer, char *frame);
    uint64_t saiv_vision_barcode_recognizer_get_recognized_object_count(void *recognizer);
    char *saiv_vision_barcode_recognizer_get_recognized_object_text(void *recognizer, int32_t index);
    int64_t saiv_vision_barcode_recognizer_release(void *recognizer);
}

enum ImageCaptureMode
{
    StillPhoto = 0,
    ContiniousVideo = 1,
    ContiniousVideoMulti = 2,
    StillPhotoMulti = 3
};

enum RecognitionTarget
{
    All,
    Linear,
    QR,
    DataMatrix,
    QRBarcodeDataMatrix,
    QRDataMatrix
};