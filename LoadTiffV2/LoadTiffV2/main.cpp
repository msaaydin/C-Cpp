#include <stdio.h>
#include <iostream>
#include <opencv2/opencv.hpp>
#include "opencv2/core/opengl.hpp"
#include "opencv2/highgui.hpp"
#include "kernel.cuh"
#include "utils.h"
#include "tiffio.h"
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <filesystem>
#include <opencv2/gpu/gpu.hpp>
#include <opencv2/gpu/gpumat.hpp>
#include <cufft.h>

#define dimension 512
using namespace cv;
using namespace std;

void printArray(uint16 **);
int main() {
	printf("test..\n\n\n\n");
	// =======call cuda files =============== 
	callHello();
	cudaDeviceSynchronize();
	checkCudaErrors(cudaGetLastError());
	int a[1] = { 10 };
	increment_by_one(a);
	cudaDeviceSynchronize();
	checkCudaErrors(cudaGetLastError());
	// ======================================
	cout << "array value after gpu function call = " << a[0] << endl;
	
	
	string imageName("C:/Users/msa/Desktop/image/3.tif"); // start with a default

																			// Open the TIFF file using libtiff
	TIFF* tif = TIFFOpen("C:/Users/msa/Desktop/image/1.tif", "r");
	
	// Create a matrix to hold the tif image in
	Mat im2,image = imread(imageName, IMREAD_ANYDEPTH);

	vector<int> compression_params;
	//compression_params.push_back(IMWRITE_TIFF_RESUNIT);
	compression_params.push_back(COMPRESSION_NONE);

	imwrite( "C:/Users/msa/Desktop/1.tif", image, compression_params);
	printf("width: %d pixels\n", (image.cols));
	printf("width: %d pixels\n", (image.rows));
	printf("channel %d\n", (image.channels()));
	
	uint16*      img2_data; //Unicode characters
	img2_data = (uint16*)image.data;
	int step = image.step; //Get image dimensions
	//image.convertTo(CV_16U, im2);
	
	for (unsigned int i = 0; i < 10; i++)
	{
		for (unsigned int j = 0; j < 10; j++)
		{
			cout<<img2_data[i*step + j]<<"-";
		}
		cout << endl;
	}
	cout << "-------------------------------------" << endl;
	printf("channels: %d\n", (image.channels()));
	
	float2 f1;
	f1.x = 343.34f;
	f1.y = 343.34f;
	cout <<"sum = "<< f1.x + f1.y;
	return 0;
}
void printArray(uint16 **ar) {
	for (int i = 0; i < dimension/100; i++)
	{
		for (int j = 0; j < dimension/100; j++)
		{
			cout << ar[i][j] << "-";
		}
		cout << endl;
	}
}