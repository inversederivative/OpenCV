#include "../include/header.h"

int main()
{
    // Location of Test Image
    std::string path = "../Resources/GunnaWunna.png";
    cv::Mat img = cv::imread(path); // Creating OpenCV "Image" object

    // Create a named Window
    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
    // Show image
    cv::imshow("Display Image", img);

    // Wait forever (or until user closes window)
    cv::waitKey(0);

}