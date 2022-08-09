### C++ on Linux

- IDEs: Visual studio code, Qt Creator, SublimeText,etc.

- Compilers (Follow the hardware): Gcc,Clang llvm

### Installation

- check linux version `uname -a`

*Note:* install gcc 11 by `sudo apt-get install gcc-11` is Not Available now, install gcc's version base on your linux os-system version

- install default gcc verson `sudo apt-get install gcc`, install specific gcc 10 `sudo apt-get install gcc-10`, check version `gcc --version`

- install g++ 10 `sudo apt-get install g++-10`, check version `g++ version`

- install gdb debuger `sudo apt-get install gdb`, check version `gdb version`

- install clang compiler `sudo apt-get install clang`, check version `clang --version`

- your compiler will be store in `ls /usr/bin`

another tool to install compile is [Homebrew](https://brew.sh/index_vi)

- install visual studio code on linux-ubuntu download `.deb` file on [visual studio code](https://code.visualstudio.com/download) and run `sudo dpkg -i [your_file].deb`


### Configuration

On the VScode `[Terminal] -> [Configure tasks]`

### Compile C++ on Linux terminal

- check g++: `g++ --verison`

- compile your `hello.cpp`cpp program `g++ hello.cpp`

- run your compiled binary file: `./a.out` (a.out is default)

- custom your output file name `g++ hello.cpp -o output` or `g++ hello.cpp -o output.exe`



