**creating a docker swarm:
- the docker engine runs with swarm mode disable by default.
- to run docker swarm mode, you can either create a new swarm or have the node join an existing swarm
- creating a docker swarm: `sudo docker swarm init` or `sudo docker swarm init --advertise-add <IP>`

	Swarm initialized: current node (l263th81dc2apgnycui4uuc5h) is now a manager.

	To add a worker to this swarm, run the following command:

	docker swarm join --token SWMTKN-1-2h86o2nimczy1o5ea7ebbwr2n7qxfe9vmw2ojhe5bnmvn2fmou-ajkmdiy611dd5fkkwkq1tkewv 192.168.1.10:2377

	To add a manager to this swarm, run 'docker swarm join-token manager' and follow the instructions.

- adding a node worker to the swarm cluster `sudo docker swarm join --token <TOKEN> <MANAGER-IP>`
- viewing the current swarm nodes: `docker node ls` (manage node)
- leave the swarm
	
	sudo docker swarm leave
	sudo docker swarm leave --force
	sudo docker swarm leave -f

- check node `sudo docker node ls`
