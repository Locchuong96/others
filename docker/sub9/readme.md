**CMD (command)**


add a command to run after the container 

	CMD ["nginx"]
	CMD ["mysqld"]
	CMD ["bash] (shell listen to the input of the terminal if you could not find the terminal your container will exit)
	
There are 2 different way to run the command from container

- shell form
	
	CMD command param1
	CMD sleep 5

- json array format

	CMD["command","param1"]
	CMD["sleep","5"]

**ENTRYPOINT**

when you want to run the container with custom param of the command, you should use ENTRYPONT instead CMD, only pass the param

	sudo docker run ubuntu_sleeper 10

inside the docker

	FROM ubuntu
	...
	ENTRYPOINT["sleep"]

if you want to set default value for the entrypoint param, like sleep function, if you did set the new value, the command will overwrite it

	FROM ubuntu
	...
	ENTRYPOINT ["sleep"]
	CMD ["5"]

if you want to custom the entrypoint in the docker run command you can use: `docker run --entrypoint sleep2.0 ubuntu-sleeper 10`
