
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
