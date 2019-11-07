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
void printArray1(uint16 *, uint16);
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
	
	// Create a matrix to hold the tif image in
	Mat_<uint16> image2,image = imread(imageName, IMREAD_ANYDEPTH);
	namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
	Mat image2;

	imshow("Display window", image2);                   // Show our image inside it.
	uint16 *h_DataReal = image.ptr<uint16>(0);

	vector<int> compression_params;
	//compression_params.push_back(IMWRITE_TIFF_RESUNIT);
	compression_params.push_back(COMPRESSION_NONE);

	imwrite( "C:/Users/msa/Desktop/1.tif", image, compression_params);
	printf("width: %d pixels\n", (image.cols));
	printf("width: %d pixels\n", (image.rows));
	printf("channel %d\n", (image.channels()));

	//TIFF* tif	= TIFFOpen("C:/Users/msa/Desktop/image/3.tif", "r");
	

	
	uint16* img2_data; //Unicode characters
	img2_data	= (uint16*)image.data;
	int step = image.step; //Get image dimensions
	cout << "step of image = " << step<< endl;
	//image.convertTo(CV_16U, im2);
	
	/*for (unsigned int i = 0; i < 10; i++)
	{
		for (unsigned int j = 0; j < 10; j++)
		{
			cout<<img2_data[i*step + j]<<"-";
		}
		cout << endl;
	}*/
	cout << "-------------------------------------" << endl;
	printf("channels: %d\n", (image.channels()));
	
	float2 f1;


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
void printArray1(uint16 * array, uint16 width)
{
	uint32 i;
	for (i = 0; i<width; i++)
	{
		printf("%u ", array[i]);
	}
	printf("\n");


}