//
// Created by snake on 6/29/2022.
//

#include "../include/Chapter1.h"

int Chapter1::chap1Main()
{

    std::cout << "Hello World!";


    // Location of Test Image
    //std::string path = "../Resources/GunnaWunna.png";
    std::string path2 = "../Resources/Starship.jpg";

    //cv::Mat img = cv::imread(path); // Creating OpenCV "Image" object
    cv::Mat img2 = cv::imread(path2);

    // Create a named Window
    cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
    // Show image
    //cv::imshow("Display Image", img);
    cv::imshow("Display Image", img2); // Only shows one image.. TODO: Fix me!

    // Wait forever (or until user closes window)
    cv::waitKey(0);



    return 0;
}