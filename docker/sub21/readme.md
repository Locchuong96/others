**Container Health check**

- You container is running, but is it healthy?
- Add a health check to the `Dockerfile`

	HEALTHCHECK [OPTIONS] CMD command 
	Ex: HEALTHCHECK CMD curl --fail http://localhost:80/ || exit 1

`docker build -t myapache`

`docker run --rm --name myapchatest -p 80:80 myapache`

- see the health status	`sudo docker inspect --format='{{json.State.Health}}' <ContainerID>`

`docker ps`

- Configure the health check using a compose file

`sudo docker stack deploy -c docker-compose.yml web`

	---
	version: '3.4'
	services:
	  demoweb:
	    image:nginx
	    ports:
	      80:80
	    volumes:
	      -/tmp:/usr/share/nginx/html
	    deploy:
	      mode:replicated
	      replicas:2
	    healthcheck:
	      test: ls
	      interval: 10s
	      timeout: 10s
              retries: 3
	      start_period: 10s
