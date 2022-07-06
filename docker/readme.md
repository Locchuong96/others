you can run docker CLI by familiar terminal ex: `git_bash`, `cmd`,etc. the `input` function can not be execute in the docker container.

docker concepts

    [Dockerfile],[Image],[Container]

- `Dockerfile`: is a `blueprint` for building images

- `Image`: is a template for running `container`

- `Container`: is running process

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

`-t` stand for pesudo terminal

`-i` stand for interactive mode

**9/ stop container**

    docker stop [container_id or name]
    docker stop b3a9527447bc

**10/ remove images**

    docker image [remove] [force] <your_image_name>
    docker image rm -f python-imdb

**11/ map port**

    docker run -[map] <your_outsize_port>:<your_inside_port> <your_image>
    docker run -p 8000:8000 con2

**12/ open terminal inside container**

    docker exec -it [container id] /bin/sh
    docker exec -it 4a956bc0df6e /bin/sh

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