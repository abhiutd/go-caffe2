#ifndef __PREDICTOR_HPP__
#define __PREDICTOR_HPP__

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

#include <stddef.h>

typedef void *PredictorContext;

PredictorContext NewCaffe2(char *model_file, int batch,
                          int mode);

void SetModeCaffe2(int mode);

void InitCaffe2();

void PredictCaffe2(PredictorContext pred, float *inputData);

const float *GetPredictionsCaffe2(PredictorContext pred);

void DeleteCaffe2(PredictorContext pred);

int GetWidthCaffe2(PredictorContext pred);

int GetHeightCaffe2(PredictorContext pred);

int GetChannelsCaffe2(PredictorContext pred);

int GetPredLenCaffe2(PredictorContext pred);

#ifdef __cplusplus
}
#endif  // __cplusplus

#endif  // __PREDICTOR_HPP__
