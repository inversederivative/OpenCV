//
// Created by InerseDerivative on 7/1/2022.
//

#include "../include/Chapter2.h"


void Chapter2::imageGrayscale()
{
    // In this demo, we will be taking an image, and converting it to GrayScale.

    std::string path = "../Resources/GunnaWunna.png";
    cv::Mat image = cv::imread(path);
    // Declare imgGray Mat object
    cv::Mat imageGrayscale;

    // Syntax: (inputArray, outputArray, operation
    // See file header for more (imgproc.hpp)
    cv::cvtColor(image, imageGrayscale, cv::COLOR_BGR2GRAY);

    cv::imshow("Image ", image);
    cv::imshow("Image Gray ", imageGrayscale);

    cv::waitKey(0);
}

void Chapter2::imageGrayAndGaussianBlur(int kernelSize, int sigmaX, int sigmaY)
{
    // In this demo, we will be taking an image, and converting it to GrayScale.

    std::string path = "../Resources/GunnaWunna.png";
    cv::Mat image = cv::imread(path);
    // Declare imgGray Mat object
    cv::Mat imageGrayscale, imageBlurred;

    // Already grayscaled...
    cv::cvtColor(image, imageGrayscale, cv::COLOR_BGR2GRAY);


    //*** Gaussian Blur *** //


    // The values below can be played with, to change the effect of the Gaussian Blur!
    // See the header file (imgproc.hpp) for more detail.

    //ksize
    // Gaussian kernel size. ksize.width and ksize.height can differ but they both must be positive and odd.
    // Or, they can be zero's and then they are computed from sigma.

    //sigmaX
    // standard deviation in X direction.
    cv::GaussianBlur(imageGrayscale, imageBlurred, cv::Size(kernelSize, kernelSize), sigmaX, sigmaY);



    //cv::imshow("Image ", image);
    //cv::imshow("Image Gray ", imageGrayscale);
    cv::imshow("Image Blurred", imageBlurred);
    cv::waitKey(0);
}



// It's often common practice to use the Canny in tandem with an image blur! We will do this here.

void Chapter2::imageBlurCanny()
{
    // In this demo, we will be taking an image, and converting it to GrayScale.

    std::string path = "../Resources/GunnaWunna.png";
    cv::Mat image = cv::imread(path);
    cv::Mat imageBlurred, imageCanny;
    cv::GaussianBlur(image, imageBlurred, cv::Size(3, 3), 3, 0);

    /**
     *  CANNY
     *
     *      Remember that we're using a blur effect first, from above!
     *      These values can also be played with.
     *      See the Canny declaration for more...
     *
     *
     *      With Canny, we're detecting the prominent edges! Remember that you're
     *       adjusting the image, to extract relevant data from it.
     */

    cv::Canny(imageBlurred,imageCanny, 50, 150);

    cv::imshow("Image Canny", imageCanny);
    cv::waitKey(0);
}
