#ifndef __CUDA_SEG_ENGINE__
#define __CUDA_SEG_ENGINE__

#include "cuda.h"
#include "cuda_runtime.h"
#include "device_launch_parameters.h"

#include "cudaDefines.h"

#include "cudaSegSLIC.h"

extern "C" __host__ void InitCUDA(int width, int height,int nSegment, SEGMETHOD eMethod);
extern "C" __host__ void CUDALoadImg(unsigned char* imgPixels);

extern "C" __host__ void TerminateCUDA();
extern "C" __host__ void CopyImgDeviceToHost(unsigned char* imgPixels, int width, int height);
extern "C" __host__ void CopyMaskDeviceToHost(int* maskPixels);
extern "C" __host__ void CopyCenterListDeviceToHost(SLICClusterCenter* centerList);
extern "C" __host__ void CudaSegmentation(SEGMETHOD eSegmethod, double weight);


#endif