**creating service**

- creating docker service

	sudo docker service create --name [SERVICE_NAME] --replicas <#> -p <host-port:container-port> IMAGE
	example:
	sudo docker service create -p 80:80 --name web nginx
	sudo docker service create --replicas 3 -p 80:80 --name web nginx

- list docker service 

	sudo docker service ls
	sudo docker service ps <ServiceName>

- Scaling up and Scaling down `sudo docker service scale web=3` (*you scale container web  3 times*)
- Details about a service 
	
	sudo docker service inspect -pretty <servicename>
	sudo docker inspect | grep [ContainerID]

- Deleting a service `sudo docker service rm web`

Node status

*Node Status* identifies the node participation in the swarm management.

|Status|Node participation|
|---|---|
|BLANK|Worker Node|
|LEADER|Manager Node (Primary)|
|REACHABLE|Candidate to become Leader node (Promote)|
|UNAVAILABLE|Manager node that cannot communicate with other nodes|
|DRIAN|Do not assign/create Containers|
