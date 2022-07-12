### counter-app

Simple flask app that counts web site visits and stored in a default Redis backend. Used in Docker Deep Dive book

- install docker compose to build container from `docker-compose.yml`

	sudo apt-get update
	sudo apt-get install docker-compose-plugin

- build docker `docker-compose.yml`: `sudo docker compose up`
- stop the docker-compose: `sudo docker compose stop` or `Ctrl + C` or `docker compose down`
- start the docker-compose again: `sudo docker compose start` (*You can not start docker compose at directory where does not have docker-compose.yml*)

**References:**
- Docker Deep Dive book (Compose chapter)
