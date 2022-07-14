**create new docker-machine**

- install docker-machine

		base=https://github.com/docker/machine/releases/download/v0.16.0 && 

		curl -L $base/docker-machine-$(uname -s)-$(uname -m) >/tmp/docker-machine &&

		sudo mv /tmp/docker-machine /usr/local/bin/docker-machine &&

		chmod +x /usr/local/bin/docker-machine

error
	Running pre-create checks...
	Error with pre-create check: "VBoxManage not found. Make sure VirtualBox is installed and VBoxManage is in the path"

- install virualbox

	sudo apt-get update
	sudo apt-get install virtualbox

- create virtual machine: `sudo docker-machine create -driver virtualbox machine1`
- list your all virtual machine: `sudo docker-machine ls`
- stop your virtual machine  `sudo docker-machine stop [your_machine]`
- start your virtual machine `sudo docker-machine start [your_machine]`
- remove your virtual machine `sudo docker-machine rm [your_machine]`
- dive into your virtual machine `sudo docker-machine ssh [your_machine]` 
- copy folder into your virtual machine `sudo docker-machine scp -r [your_floder] [your_machine]:[container_directory]`
- check your virtual machine ip `sudo docker-machine ip [your_machine]` 
