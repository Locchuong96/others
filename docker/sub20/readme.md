**Docker config**

Swarm service configs, allow you to store non-sensitive information, such as configuration files in the Cluster
Any service can use this without the need to bind-mount configuratui files into the containers or use environment variables

	[Final image]
	      |
	   [Centos]
              |	
            [App]
              |	
        [Web.conf(dev)]->DEV->QA->PERF->STAGE->PROD

- When you grant a newly-created or running service access to a config, the config is mounted as a file in the container
- The location of the mount point within the container defaults to `/<config-name>`in Linux containers, In Windows containers, configs are all mounted into `C:\ProgramData\Docker\configs`
- We can explicitly define the location using `target` option

	sudo docker config create <configname> <file>
	
	sudo docker service create --name web --config src=testconfig,target=/tmp/sample.conf -p 80:80 nginx

`docker config create sample.conf sample.conf`
`docker stack deploy -c docker-compose.yml web`

	---
	version "3.4"
	services:
	  demoweb:
	    image:nginx
	    ports:
	      -80:80
	    volumes:
	    - /tmp:/usr/share/nginx/html
	    deploy:
	      mode: replicated
	      replicas: 2
	    configs:
	      -source:sample.conf
		target: /tmp/sample.conf
		mode: 0755
	configs:
	  sample.conf:
	    external:true

