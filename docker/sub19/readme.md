**Managing nodes**

[access to manager node] -> [ change status for their status] -> [create service]

- `sudo docker node inspect --pretty <NODE>`

- change node status
	
sudo docker node promote

	sudo docker promote [IP ADDRESS]
	sudo docker promote ip-172-31-5-46	
	
- `sudo docker node demote`

- `sudo docker node update --availability drain <NODE>`

- `sudo docker node update --availability active <NODE>`

**Rolling updates**
- When updating a service, you can define how many containers should be updated at a time,
and what should happen if the new containers start failing.
- Roll back to the previous version of a service

- `sudo docker service update --image <IMAGE> <Service>`
- `sudo docker service update --replicas=5 <Service>`
- `sudo docker service update --rollback <Service>`
- `sudo docker service update --update-failure-action=rollback <Service>`
- delete docker service `sudo docker service rm <service_name>`
- list docker service `sudo docker service ps web`
**Replicated and global mode**

*Replicated*:

- A `replicated service` specifies a number of identical tasks you want to run
- Swarm runs services in Replicated mode by default

*Global*

- a `global service` runs one replica per node on all the nodes in the swarm, with no pre-specified number of tasks/nodes
- every new node added will get the replica created and viceversa

Example: When we have to run some daemon process on each node like *logstash*,*Datalog*,*Prometheus*,*ceph* etc
	sudo docker service create -p 80:80 --name web --mode global nginx

**Deploy the stack to the swarm**

- A stack is a group of interrlated services that share dependencies, and can be orchestared,and scaled together
- A single stack is capable of defining and coordinating the functionality of an entire application
- User `docker-compose.yml` of version `3.0` to define the stack & swarm to run on multiple machines

`sudo docker stack deploy -c docker-compose.yml <STACKNAME>`
`sudo dokcer stack ls`
`sudo docker stack ps <STACKNAME>`
`sudo docker stack services <STACKNAME>`
`sudo stack rm <STACKNAME>

`docker-compose.yml`

	---
	version "3.4"
	services:
	  demoweb:
	    image:nginx
	    ports:
	      -80:80
	    volumes:
	      -/tmp:/usr/share/nginx/html
	    deploy:
	      mode: replicated
	      replicas: 2

- deploy docker-stack: `sudo docker stack deploy -c docker-compose.yml web`

**Service Discovery and Load balancing**
- The swarm manager uses *ingress load balancing* to expose the services you want to make available externally to the swarm
- the ingress controller will do round robin by default 
