#include "..\..\dataIO.h"

int main()
{
	dataIO<> file;
	file.path = "..\\testSamples\\img\\";

	file.imgFilename = "img1.jpg";
	cv::Mat img = file.readImg();

	// processing img...

	file.saveImg(img, "_processed");

	return 0;
}