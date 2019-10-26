#include <stdio.h>
#include "cuda_runtime.h"
#include "device_launch_parameters.h"
#include "cuda.h"
#include "kernel.cuh"


__global__ void cuda_hello() {
	int id = threadIdx.x;
	printf("Hello World from GPU! blockid.x = %d threadidx = %d\n",blockIdx.x,id);
}

__global__ void addKernel(int *c, const int *a, const int *b)
{
	int i = threadIdx.x;
	c[i] = a[i] + b[i];
}
__global__ void increment_by_one_kernel(int* vals) {
	vals[threadIdx.x] += 1;
}

void callHello() {
	cuda_hello <<<2, 10 >>>();
	cudaDeviceSynchronize();
}

void increment_by_one(int* a) {
	int* a_d;
	cudaMalloc(&a_d, 1);
	cudaMemcpy(a_d, a, 1, cudaMemcpyHostToDevice);
	increment_by_one_kernel << <1, 1 >> >(a_d);
	cudaMemcpy(a, a_d, 1, cudaMemcpyDeviceToHost);
	cudaFree(a_d);
}