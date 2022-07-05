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

    docker run -t -i [your_image_name]

`-t` stand for pesudo terminal

`-i` stand for interactive mode

**9/ stop container**

    docker stop [container_id or name]
    docker stop b3a9527447bc