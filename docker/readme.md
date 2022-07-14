## Docker Machine
install docker machine, you can use `&&` if you want to execute whole command together

    base=https://github.com/docker/machine/releases/download/v0.16.0 
    
    curl -L $base/docker-machine-$(uname -s)-$(uname -m) >/tmp/docker-machine
    
    sudo mv /tmp/docker-machine /usr/local/bin/docker-machine
    
    chmod +x /usr/local/bin/docker-machine
    
- list docker machine `docker-machine ls`

## Docker Swarm
Before starting `docker swarm` please refer to the [docker](#Docker) below.

Agenda
- container orchestration
- What is docker swarm?
- [Create Swarm cluster](https://github.com/Locchuong96/others/tree/main/docker/sub17)
- [Setup Manager/Worker](https://github.com/Locchuong96/others/tree/main/docker/sub17)
- [Create Service](https://github.com/Locchuong96/others/tree/main/docker/sub18)
- [Manage Service](https://github.com/Locchuong96/others/tree/main/docker/sub19)
- [Docker Config](https://github.com/Locchuong96/others/tree/main/docker/sub20)
- [Docker Healthcheck](https://github.com/Locchuong96/others/tree/main/docker/sub21)

Docker Swarm is a technique in which we join multiple docker engines running on different hosts use them together as a cluster,
The usage is simple, Declare your requirement as stacks of services,and let docker swarm handle the rest.

**Concepts**

- *Service:* A service is the definition of the tasks to execute on the swarm nodes.
    - which image to use
    - how many containers to run
    - which commands to execute inside containers.
    - which port, volumes,network etc to use

- *Task* a task carries a docker container nad the commands to run inside the container.
    - Once a task is assigned to a node, it cannot move to another node.
    - It can only run on the assigned node or fail.

- *Manager nodes* is the machine we communicate with
We do everything in the `manage nodes`:
    - Assigns to other nodes
    - Manager nodes handle cluster management tasks: maintaining cluster state,scheduling services, and serving swarm mode HTTP API endpoints.
    - The managers maintain a consistent state fo the swarm and services running on it.
## Docker

you can run docker CLI by familiar terminal ex: `git_bash`, `cmd`,etc. the `input` function can not be execute in the docker container.
This is my trick `you get six, you give five and remain one to keep track`

[test your docker knowlegdes](https://kodekloud.com/courses/labs-docker-for-the-absolute-beginner-hands-on/?utm_source=youtube_fcc&utm_medium=labs&utm_campaign=docker)

docker concepts
    
    [Dockerfile],[Image],[Container]

- `Dockerfile`: is a `blueprint` for building images

- `Image`: is a template for running `container`

- `Container`: is running process
    
    docker [optional] [command] [argument]

- docker registry: `regitryDomain/imageName:tag`

        sudo docker pull mongo:4.2
        sudo docker pull docker.io/library/mongo:4.2

when you need to get help `docker [command] --help`

**1/ get a summary of docker**
    
    docker

**2/ display docker info**
    
    docker info

**3/ check docker installation**

running `hello-world` image

    docker run hello-world

**4/ check docker images on your local machine**

    docker images

**5/ check docker container on your local machine**

    docker ps -a

**6/ check docker version**

    docker -v

**7/ build docker image**

    docker buid [tag] <your_image_name>
    docker build -t python-imdb .

**8/ run docker container**

    docker run [your_image_name]
    docker run python-imdb

run docker with terminal input

    docker run -i [your_image_name]
    docker run -t [your_image_name]
    docker run -it [your_image_name]

`-t` stand for terminal

`-i` stand for interactive mode

run docker with specific tag

    docker run [your_image]:[your_specific_tag]
    
**9/ stop container**

    docker stop [container_id or name]
    docker stop b3a9527447bc

**10/ remove images**

Make sure the image do not have any container before you remove it

    docker image [remove] [force] <your_image_name>
    docker image rm -f python-imdb
    docker rmi [your_image]
    
delete all containers
    
    docker rm -f $(docker ps -a -q)

delete all images

    docker image rm -f $(docker images -q)
    
**11/ map port**

    docker run -[map] <your_outsize_port>:<your_inside_port> <your_image>
    docker run -p 8000:8000 con2

**12/ open terminal inside container**

    docker exec -it [container id] /bin/sh
    docker exec -it 4a956bc0df6e /bin/sh
    docker exec -it 4a956bc0df6e /sh
    
**13/ commit your change**

You can create container from a image then change something and commit to create a new image

    docker commit -m "What you did to the image" -a "Author Name" container_id repository/new_image_name
    
**14/ check linux os information** `cat /etc/*release*`

**15/ search docker image on dockerhub** 

    sudo docker search [your_image_name]
    sudo docker search docker/whalesay
    
**16/ pull image from dockerhub**

    sudo docker pull [image_name]
    sudo docker pull docker/whalesay
    
**17/ put your running contaner going to sleep**

    sudo docker run [your_image] sleep 5
    
**18/ build the container as as custom name**

    sudo docker run --name [your_custom_name] [your_image]
    
**19/ docker manifest image**

    sudo docker manifest inspect ubuntu | grep 'architecture\|os'
    
sub3    

**20/ tag local image**

if you want push your local image into docker_hub,you must give it a tag

    sudo docker tag [your_image] [your_repository]/[your_version]
    sudo docker tag  0e5574283393 fedora/httpd:version1.0
    
**21/ docker volume**

docker installed in linux in directory `var/lib/docker` and you need (superuser permission) `sudo su` to access, when use `docker volume`, the `./docker/volumes` will contain the floder created by volume.

**22/ docker start**

start a stopped container again with terminal attach: `sudo docker start -a [your_container]`

- get help with `docker volume`: `sudo docker volume --help`
- list your volumes: `sudo docker volume ls`
- inspect specific volume: `sudo docker volume inspect [your_volume]`
- remove specific volume folder: `sudo docker rm [your_volume]`

**23/ copy file into container**
Syntax to Copy from Container to Docker Host  
    docker cp {options} CONTAINER:SRC_PATH DEST_PATH 

there are 3 type of `volume`:

- `Host volume`: you decide where on the host file system the referenc is made

- `Anonymous volue`: for each container a folder is generated that gets mounted, your data will mount in the directory `var/lib/docker/volumes/[folder_name]/_data`

    docker run
        -v [host_directory]:[container_directory]
        -v /home/mount/data:/var/lib/mysql/data

- `Named Volume`: you can reference the volume just by name, should be used in production

    version:  '3'
    services:
        mongodb:
            image: mongo
            ports:
             - 27017:27017
            volumes:
             - db-data:/var/lib/mysql/data
    volumes:
        db-data
    
    docker run
        -v /var/lib/mysql/data
**22/ docker login**
the `password` and the `username` store in `.json`

    sudo docker login

**23/ logs inside the container**

    sudo docker logs
  
**24/ docker prune**
remove useless object

    sudo docker volume prune
    sudo docker network prune

**25/ docker inside the docker (DooD Method)**
    
- pull docker image: `sudo docker pull docker`
- run mount docker Unix socket: `sudo docker run -v /var/run/docker.sock:/var/run/docker.sock docker`
- start your container: `sudo docker start [your_container]`
- stop your container: `sudo docker stop [your_container]`

**Example1**

    # this is a comment in docker
    # Dockerfile, Image, Container
    # FROM baseImage
    FROM  python:3.8

    # add the main.py into the container
    ADD main.py .

    # you can install python-packages by pip install or pip install -r requirements.txt
    RUN pip install requests Beautifulsoup4

    # specify the entry command, meaning when you run docker this command will activate the container
    CMD ["python","./main.py"]

**Example2**

    # this is a comment in docker
    # Dockerfile, Image, Container
    # FROM baseImage
    FROM  python:3.8

    # add starting point working directory
    WORKDIR /fastapi-app

    # copy the requirement into the directory
    COPY requirements2.txt .

    # you can install python-packages by pip install or pip install -r requirements.txt
    RUN pip install -r requirements2.txt

    # copy the app floder on your machine into the container
    COPY ./app ./app

    # specify the entry command, meaning when you run docker this command will activate the container
    CMD ["python","./app/main.py"]
    
**Example3**

    # docker - linux
    # run ubuntu docker
    sudo docker run -it ubuntu
    
    # update
    apt update
    
    # install a application
    apt install nodejs
    
    # exit container
    exit
## References

[D15 - Sử dụng docker-machine tạo các Docker Host](https://www.youtube.com/watch?v=XPQqRK-lFyo)

[D16 - Khởi tạo và quản lý Docker Swarm](https://www.youtube.com/watch?v=6a529awrb4Q)

[D17 - Chạy dịch vụ trên Docker Swarm](https://www.youtube.com/watch?v=QcURXYCZSuY)

[D18 - Sử dụng docker stack chạy các dịch vụ trên swarm](https://www.youtube.com/watch?v=fedUjqpfT0A&list=PLwJr0JSP7i8At14UIC-JR4r73G4hQ1CXO&index=19)

[D19 - Mạng Overlay trong Docker Swarm](https://www.youtube.com/watch?v=aSQjoCqOx7k&list=PLwJr0JSP7i8At14UIC-JR4r73G4hQ1CXO&index=20)

[D20 - Volume các ổ đĩa trong Docker Swarm](https://www.youtube.com/watch?v=DFQaj3Omo1E)
