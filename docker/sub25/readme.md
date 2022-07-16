**Overlay network in docker swarm**

If you want container in different docker-host (virtual machine) can communicate together, docker-swarm give you a overlay-network

- check `docker network ls` default name of the overlay is `ingress`

- create a service with mapport `sudo docker service create --name myservice --replicas 5 -p 8080:80 busybox top`


	"Networks": {
                "ingress": {
                    "IPAMConfig": {
                        "IPv4Address": "10.0.0.6"
                    },
                    "Links": null,
                    "Aliases": [
                        "740fe747ef63"
                    ],
                    "NetworkID": "qke8dax8zg9iuf3u56u48lraz",
                    "EndpointID": "629b8374dfad447d285cd3e0f751982c1a0b815b80764c465837780b1d0e474d",
                    "Gateway": "",
                    "IPAddress": "10.0.0.6",
                    "IPPrefixLen": 24,
                    "IPv6Gateway": "",
                    "GlobalIPv6Address": "",
                    "GlobalIPv6PrefixLen": 0,
                    "MacAddress": "02:42:0a:00:00:06",
                    "DriverOpts": null
                }
	
- ping from container to container in `ingress` overlay network `ping 10.0.0.6`
- create a new overlay network on manager node `docker network -d overlay [YOUR_NETWORK]`
- create service with your specify overlay network `docker service create --name=myservice --network mynet1 --replicas 3 busybox top`, manager will auto create your network inside other worker
 you can not let your standalone container connect to  overlay network. if you want you have to create a new network with `--attachable` argument  `docker network create -d overlay --atachable mynet2`
- when you create a services with network with `docker-stack` by `docker-compose.yml` file, default of the network is overlay 
- deploy services`docker stack deploy -c docker-compose.yml stack1`
when you remove stack on the manager node it also remove services there for also containers in worker nodes. 