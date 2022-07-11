**docker windows**

a linux container can run on the window os system via a virtual machine, but you can not run a window container on linux os sytem.
because the container run on the linux share the same os kernel.

1. Docker on Windows using Docker Toolbox, this toolbox have a bunch of application to make sure linux container can run on linux
	
	Docker Toolbox
	- Oracle Virtualbox
	- Docker engine
	- Docker machine
	- Docker compose
	- Kitematic GUI (user interface)

The requirement:
- 64-bit operating
- Windows 7 or higher
- Visualization is enabled

2. Docker Desktop for Windows.
Docker Desktop for Windows is a new solution but just support for window10 and higher version.
If you want to run the windows container on your window, you have to change something on the set up

Support: Windows 10 Enterprise/ Professional Edition, Windows Server 2016

**Container type**
Linux give you some base images for linux system such as Ubuntu ,Debian, Fedora,Alpine,etc.
In the Windows sever you have 2 options:
- Base image
   - Windows Server Core
   - Nano Server (the light weight sever type)

- Hyper-V Isolation

*Note* There are 2 option deploy VirtualBox Or Hyper-V, but they can not coexit

**docker on Mac**

There are 2 option that you can deploy linux system on Mac
1. docker toolbox
2. docker desktop for Mac
