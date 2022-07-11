**docker orchestration**

container orchestration consists of a set of tools and scripts that can help host containers in a production eviroment. When running on production enviroment,
maybe your containers will crash or maybe your docker host will crash. Typically that container orchestration contain multiple docker host.
It allow you to run 100-1000 container instances. That mean you can scale up or down when your user number change

`docker service create --replicas=100 nodejs`

There are some solutions about container orchestration as:
- Docker Swarm: easy to setup (for scaling solutions)
- kubernetes
- MEMOS

**Docker Swarm**

- Run one instance: `sudo docker run my-web-server`
- Run docker swarm cluster: `sudo docker service --replicas=3 my-web-server`
- Run docker swarm cluster map port: `sudo docker create --replicas=3 -p 8080:80 my-web-server`
- Run docker swarm cluster custom network: `sudo docker create --replicas=3 --network frontend my-web-server`

**Kubernetes**

- Run docker single command: `docker run my-web-server`
- Run kubernetes instances: `kubectl run --replicas=1000 my-web-server`
- Run kubernetes scaling up command: `kubectl scale --replicas=2000 my-web-server`
- Run kubernetes upgrade command: `kubectl rolling-update my-web-server --image=web-server:2
- Run kubernetes roll back command: `kubectl rolling-update my-web-server --rollback`


You can run instance from a single node or you can implement it with a cluster, cluster include some node run th instance if one node fail,
it will give you the other node backup
- Node
- Cluster
- Master

Kubernetes components
- API server
- etcd
- kubelet
- Container Runtime
- Controller
- Scheduler

`kubectl` commands:

- deploy cluster: `kubectl run hello-minikube`
- get info about the cluster: `kubectl cluster-info`
- list all node in the cluster: `kubectl get nodes` 

