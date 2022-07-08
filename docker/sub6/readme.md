**run-tag**

tag mean the version of your image, if you don't add any specific tag, that mean you want the latest verion

	sudo docker run [your_image]:[your_specific_tag]

**run-stdin**

run docker with iteractive mode
	
	sudo docker run -i [your_image]

run docker with attach mode, display anything print out the container

	sudo docker run -t [your_image]

run docker with attach and iteractive mode

	sudo docker run -it [your_image]

**run-port mapping**

`http://0.0.0.0:5000/` = `http://172.17.0.2:5000` local host

	sudo docker run -p [outside_port]:[inside_port] [your_image]
	sudo docker run -p 5000:80 webapp
	sudo docker run -p 5000:8000 webapp
	sudo docker run -p 5000:8001 webapp

**run-volume mapping**

everything inside the container will disappear, so if you want to take them out, you must volume the folder contain them to the outside folder

	docker run -v [your_outside_folder]:[your_inside_folder] [your_docker_image]
	docker run -v /opt/datadir:/var/lib/mysql mysql

**inspect the docker container**

get more information about your container

	sudo docker inspect [your_container]

**show the log message of the code while running**

the container and the image can be identify by ID or their name, so [your_container] = [your_container_id] = [your_container_name], if the program in your container run and print out some, you can open a new terminal and view it by this command

	sudo docker log [your_container] 
