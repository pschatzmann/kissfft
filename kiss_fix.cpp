
#include "kiss_fix.h"

kiss_fft_cfg cpp_kiss_fft_alloc(int nfft,int inverse_fft,void * mem,size_t * lenmem) {
    return kiss_fft_alloc(nfft,inverse_fft, mem,lenmem);
}
void cpp_kiss_fft(kiss_fft_cfg cfg,const kiss_fft_cpx *fin,kiss_fft_cpx *fout){
    return kiss_fft(cfg,fin, fout);
}
