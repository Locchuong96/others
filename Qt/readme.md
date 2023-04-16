
# Topics of the course

1/ UI Components

2/ Qt5 Animations and state machine 

3/ Working with MySQL and Sqlite Database

4/ Qt5 Painting with QPainter class

5/ Simple login and registration system

[Examples](https://codeloop.org/)

[Online course](https://www.youtube.com/watch?v=Et_bgnJ_Hhg)

[Qmake](https://doc.qt.io/qt-6/qmake-tutorial.html)

    sudo apt-get install build-essential

    sudo apt-get install qtcreator

    sudo apt-get install qt5-default
    
[Install Qt](https://stackoverflow.com/questions/48147356/install-qt-on-ubuntu)

        qmake -o Makefile project.pro
        make
        ./MyApp
        
[How to Install OpenCV in Ubuntu 16.04 LTS for C / C++](http://www.codebind.com/cpp-tutorial/install-opencv-ubuntu-cpp/)

[HOW TO LINK OPENCV TO QT ON UBUNTU | LINKING OPENCV TO QT ON UBUNTU](https://www.youtube.com/watch?v=_PsxwpJnWD0)

[How to Install OpenCV in Ubuntu for C / C++ (Ubuntu 18.04, Ubuntu 20.04 )](https://www.youtube.com/watch?v=6pABIQl1ZP0)

Step 1 – Updating Ubuntu

        $ sudo apt-get update

        $ sudo apt-get upgrade

Step 2 – Install dependencies

        $ sudo add-apt-repository ppa:deadsnakes/ppa

        $ sudo apt-get install build-essential cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev

        $ sudo apt-get install python3.5-dev python3-numpy libtbb2 libtbb-dev
        
        $ sudo add-apt-repository 'deb http://security.ubuntu.com/ubuntu xenial-security main'
        
        $ sudo apt update
        
        $ sudo apt install libjasper1 libjasper-dev

        $ sudo apt-get install libjpeg-dev libpng-dev libtiff5-dev libjasper-dev libdc1394-22-dev libeigen3-dev libtheora-dev libvorbis-dev libxvidcore-dev libx264-dev sphinx-common libtbb-dev yasm libfaac-dev libopencore-amrnb-dev libopencore-amrwb-dev libopenexr-dev libgstreamer-plugins-base1.0-dev libavutil-dev libavfilter-dev libavresample-dev

Step 3 –  Get OpenCV

        $ sudo -s

        $ cd /opt

        /opt$ git clone https://github.com/Itseez/opencv.git

        /opt$ git clone https://github.com/Itseez/opencv_contrib.git

Step 4 – build and install OpenCV

        /opt$ cd opencv

        /opt/opencv$ mkdir release

        /opt/opencv$ cd release

        /opt/opencv/release$ cmake -D BUILD_TIFF=ON -D WITH_CUDA=OFF -D ENABLE_AVX=OFF -D WITH_OPENGL=OFF -D WITH_OPENCL=OFF -D WITH_IPP=OFF -D WITH_TBB=ON -D BUILD_TBB=ON -D WITH_EIGEN=OFF -D WITH_V4L=OFF -D WITH_VTK=OFF -D BUILD_TESTS=OFF -D BUILD_PERF_TESTS=OFF -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local -D OPENCV_EXTRA_MODULES_PATH=/opt/opencv_contrib/modules /opt/opencv/

        /opt/opencv/release$ make -j4

        /opt/opencv/release$ make install

        /opt/opencv/release$ ldconfig

        /opt/opencv/release$ exit

        /opt/opencv/release$ cd ~

Now to check if OpenCV is installed on a machine, run the following commands

        $ pkg-config --modversion opencv

Install documentation and examples If Qt Creator is installed thanks to the Ubuntu Sofware Center or thanks to the synaptic package manager, documentation for Qt Creator is not installed. Hitting the F1 key will show you the following message : "No documentation available". This can easily be solved by installing the Qt documentation:

    sudo apt-get install qt5-doc

    sudo apt-get install qt5-doc-html qtbase5-doc-html

    sudo apt-get install qtbase5-examples

Restart Qt Creator to make the documentation available.

Error while loading shared libraries

Problem:

radiusd: error while loading shared libraries: libfreeradius-radius-2.1.10.so: cannot open shared object file: No such file or directory

Reason:

Actually, the libraries have been installed in a place where dynamic linker cannot find it.

Solution:

While this is not a guarantee but using the following command may help you solve the “cannot open shared object file” error: `sudo /sbin/ldconfig -v`

[QtCreator: No valid kits found](https://stackoverflow.com/questions/26499404/qtcreator-no-valid-kits-found)

For Qt5:

    sudo apt-get install qt5-default
        
For Qt4:

    sudo apt-get install qt4-dev-tools libqt4-dev libqt4-core libqt4-gui

http://www.lucidarme.me/how-install-documentation-for-qt-creator/

https://ubuntuforums.org/showthread.php?t=2199929

https://itsfoss.com/error-while-loading-shared-libraries/
