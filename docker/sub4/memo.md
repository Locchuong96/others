Remember the container is alive when there is any execution inside the container,
you can check the running container by this command `sudo docker ps`
if you can not find your container, it is meaning the container is crash or finish
Then you can check all the container by this command `sudo docker ps -a`

**pull ubuntu container:** `sudo docker pull ubuntu`

**build your container:** `sudo docker run ubuntu`

It would run one process -> process exits -> container exits

**run your container with terminal inside** `sudo docker run -it ubuntu`
