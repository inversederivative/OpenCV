//
// Created by InveseDerivative on 6/29/2022.
//

#include "../include/Chapter1.h"

void Chapter1::displayImage()
{

    // Location of Test Image
    std::string imgPath = "../Resources/GunnaWunna.png";
    cv::Mat img = cv::imread(imgPath); // Creating OpenCV "Image" object

    // Create a named Window
    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);

    // Show image
    cv::imshow("Display Image", img);

    // Wait forever (or until user closes window)
    cv::waitKey(0);
}

void Chapter1::displayVideo(int delayMs)
{

    std::string vidPath = "../Resources/3HS.mp4";
    cv::VideoCapture cap(vidPath);
    cv::Mat img;

    while (true) {

        // Location of Test Image

        cap.read(img);
        cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);

        cv::imshow("Display Image", img);
        cv::waitKey(delayMs);
    }
}

void Chapter1::displayWebcam()
{

    cv::VideoCapture cap(0);
    cv::Mat img;

    while (true) {

        // Location of Test Image

        cap.read(img);
        cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);

        cv::imshow("Display Image", img);
        cv::waitKey(1);
    }
}