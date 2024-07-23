// the latest core of the ESP32 is broken, so we need to use this work around to resolve
// the c functions properly

#include "kiss_fft.h"

kiss_fft_cfg cpp_kiss_fft_alloc(int nfft,int inverse_fft,void * mem,size_t * lenmem);
void cpp_kiss_fft(kiss_fft_cfg cfg,const kiss_fft_cpx *fin,kiss_fft_cpx *fout);
