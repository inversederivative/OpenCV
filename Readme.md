# CLion - OpenCV Tutorial

This is an implementation of the OpenCV C++ tutorial, by Youtuber "Murtaza's Workshop - Robotics and AI."

### Please Note:

        This project will not run properly,
         if you have not correctly downloaded,
         built, and configured OpenCV, including
         setting system path variable correctly.





The tutorial I followed, involved first downloading the CMake Gui. You will want to then download the latest 
Windows Version of CMake. You will likely have difficulty, but what I did was instead of using the MinGW compiler, 
I used TDM-GCC-64 which enforces C++ 11 Standard. You then configure the MinGW build path, with CMake, and then 
build it with mingw32-make, from a Powershell/CMD in the new MinGW-Build folder you created with CMake.

I may update this readme with new details.

My default toochain is WSL (Fedora Linux), which works great, but it's quite niche for OpenCV C++ with Windows. 
In order to keep from using your default toolchain, and only utiliing the MinGW (TDM) toolchain, we must 
go to project settings, and then find CMake, then select the appropriate toolchain for the Debug version you're 
building.

In order to get everything to work properly, after you've built your own OpenCV Source, and included the proper path 
as I have, and you configure a new MinGW toolchain (based on the TDM-GCC-64 complier we installed earlier) and then the 
project should run!



Email me if you have any Questions: 
inversederivative@gmail.com

# @InverseDerivative