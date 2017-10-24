#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main()
{
	Mat srcImage = imread("E:\\_Code\\_img\\3.jpg");
	imshow("��ԭͼ����ʴ����", srcImage);
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImage;
	erode(srcImage, dstImage, element); 
	imshow("��Ч��ͼ����ʴ����", dstImage);
	waitKey(0);

	return(0);
}