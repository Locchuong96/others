**docker network**

There are 3 kind of networking in docker (or 3 kind of driver network docker)

- bridge: default type, this is the private internal network,you have to map port from the inside the container `docker run ubuntu`
- none: there is no network at all `docker run ubuntu --network=none`
- host: `docker run ubuntu --network=host`: if you run this mode, you can access this port from the outside because the port mapped automaticlly, this also mean you can not run any webapp with the same port anymore

User-defined networks

	docker network create \
	--driver bridge \
	--subnet 182.18.0.0/16
	custom-isolated-network

	sudo docker network create \
	--driver bridge \
	--subnet 182.18.0.0/24 \
	--gateway 182.18.0.1 \
	wp-mysql-network

Delelte your network `sudo docker network rm [your_network]`

**list all network** `sudo docker ls`


**embedded DNS**
if you got a database container, and a web-application running in the same docker host , you can let your web-application container access your database.
One thing you can do that you could use the internal IP address signed to the MySQL container, but you can not sure that your ip-address will the same when you reboot the docker-host
so you can access

	mysql.connect( 172.17.0.3 )
	mysql.connect( mysql )

*note* that the built in DNS server always runs at address 172.0.0.11, docker host manage there container by seperate container namespaces, so thay can talk together by the a virtual enthernet

**inspect docker network**

	sudo docker network ls

run docker container with setting network `sudo docker run --name alpine-2 --network=none alpine`

