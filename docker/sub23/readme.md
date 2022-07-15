**virtual machines**

- machine1 `sudo docker-machine create -driver virtualbox machine1`

- machine2 `sudo docker-machine create -driver virtualbox machine2`

- ssh to machine `sudo docker-machine ssh machine1`

- list all machine `sudo docker-machine ls`

**docker swarm**

You can create a swarm by virtual machines or by local machine and virtual machine

- create docker swarm `sudo docker swarm init` or `sudo docker swarm init --advirtise-addr [your_ip]`

- get swarm token `sudo docker swarm join-token worker`

- join swarm `sudo docker swarm join --token <TOKEN>`

- list node in swarm `sudo docker node ls`

Docker if you want to run container on your nodes and let the manager manage them, you  have to create a `docker service`.
The service keep generate container in nodes, if you want to stop the containers, remove the service first
- create docker service

        sudo docker service create --replicas [NO_SERVICE] --name [SERVICE_NAME] -p [HP:CP] [IMAGE_NAME]
        sudo docker service create replicas 3 --name testservice -p 80:8080 locchuong/swarmtest:node

- list docker service `sudo docker service ls`

- inspect a service `sudo docker service ps [SERVICE_NAME]`

- remove service `sudo docker service rm [SERVICE_NAME]

- logout testserive `sudo docker service logs testservice`

- get static in node (from node) `sudo docker stats`

- scale the container `docker service scale testservice=10` (scale replicas from 5 to 10)

**docker service**
you can update new image for the service, docker swarm will generate new container first and remove the olds by update
	
	sudo docker service update --image=locchuong/swarmtest:dotnet
	sudo docker servive update --limit-memory 100MB testservice
	sudo docker service update --limit-cpu 0.5 testservice (one cpu)
