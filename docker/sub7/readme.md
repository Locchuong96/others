**environment variables**

- check linux environment variable : `printnev`, `printenv | less`, `printenv | more`

- set value for os enviroment variable : `export APP_COLOR=blue`

- set environment variable inside the container: `sudo docker run -e APP_COLOR=blue [your_image]`

- run the container with setting evironment variable and map port `sudo docker run -e APP_COLOR=blue -p [outside_port]:[inside_port] [your_image]`

- open the terminal inside runing container `sudo docker exec -it [your_contaner] bash`

- copy the floder into the container: 
	sudo docker cp [your_container]:[source_path] [destination_path]
	sudo docker cp 74789744g489:/root/img_files/car_photos/images Desktop/images

- return to nano edit `fg`

- build docker image `ADD floder /path/inside/your/container`

**mySQL deploy**

	sudo docker run --name [your_container_name] -e MYSQL_ROOT_PASSWORD=[your_root_password] [your_image_name]
	sudo docker run --name mysql-sb -e MYSQL_ROOT_PASSWORD=db_pass123 mysql


