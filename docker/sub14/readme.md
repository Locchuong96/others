**docker engine**

Docker Engine include:
- Docker CLI: That is the command line interface,use can use a `remote mode` to access the docker host 
	docker -H=remote-docker-engine:2375
	docker -H=10.123.2.1:2375 run nginx
- REST API: The Docker REST API server is the API interface that programs can use to talk to the deamon and provide the instruction
- Docker Deamon: this is the background process that manage Docker object such as the images, containers,volumes, networks 

**containerization**

Namespace's structure

- Process ID ((PID)
- Network
- InterProcess
- Mount
- Unix Timesharing

docker run on linux system, the container will use CPU and local memory,

- you can manage how many your container manage the CPU using this command: `docker run --cpus=.5 ubtuntu` 
this make sure the container does not use over `0.5` of CPU

- you can manage the memory how much memory that the container will use: `docker run --memory=100m ubuntu`
