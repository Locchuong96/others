**docker storage and file system**

- Where and how docker store data


- how we can manage file system of the container, when you install dockeron your local machine, it will create the floder stucture like this

	/var/lib/docker
	|_buildkit
	|_containers (store the files related to containers)
	|_image	(store the files related to image)
	|_network
	|_overlay2
	|_plugins
	|_runtimes
	|_swarm
	|_tmp
	|_trust
	|_volumes

Layered architecture

When you build docker, the container will be build by layer to layer and if the same layer is already build, it can be reuse and you can save so much time.

`docker build Dockerfile -t loc/my_custom_app`

Dockerfile

	layer1--FROM Ubuntu
	layer2--RUN apt-get update && apt-get -y install python
	layer3--RUN pip install flask flask-mysql
	layer4--COPY . /opt/source-code
	layer5--ENTRYPOINT FLASK_APP=/opt/source-code/app.py flask run

`docker build Dockerfile2 -t loc/my_custom_app_2`

Dockerfile2

	(reused)layer1--FROM Ubuntu
	(resused)layer2--RUN apt-get update && apt-get -y install python
	(resused)layer3--RUN pip install flask flask-mysql
	layer4--COPY . /opt/source-code
	layer5--ENTRYPOINT FLASK_APP=/opt/source-code/app.py flask run


**store the data inside the container**

If you want to keep your data in the contaner 

- create a volume folder inside `docker/volumes `: `docker volume create_volume`
- then when you run the container you can mount your storage folder `docker run -v data_volume:/var/lib/mysql mysql`
the docker will connect the data folder inside the container to outside (`var/lib/mysql` by default).
docker will automaticlly create a mount folder if you don't created it `docker run -v data_volume2:/var/lib/mysql mysql`
- check all your volumes `sudo ls /var/lib/docker/volumes`
- `docker run -v [your_full_dir]:[container_data_folder] [your_image]` if you want to mount data inside the container to somewhere else the default value, that is bind-volume

**mount**

mount can do the same as volume, it like verbose command with more param
	
	docker run \
	--mount type=bind, \
	source=/data/mysql, \
	target=/var/lib/mysql \
	mysql

docker use storage drivers to handle this procession, some driver depend on `os-system`, Device mapper can be the best opption.
docker will choice automaticlly the available automaticlly.

- AUFS
- ZFS
- BTRFS
- Device Mapper
- Overlay
- Overlay2

		

