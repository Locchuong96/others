
[Online course](https://www.youtube.com/watch?v=Et_bgnJ_Hhg)

[Install Qt](https://stackoverflow.com/questions/48147356/install-qt-on-ubuntu)

    sudo apt-get install build-essential

    sudo apt-get install qtcreator

    sudo apt-get install qt5-default

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

http://www.lucidarme.me/how-install-documentation-for-qt-creator/

https://ubuntuforums.org/showthread.php?t=2199929

https://itsfoss.com/error-while-loading-shared-libraries/
