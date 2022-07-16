**docker stack**

with docker-compose you can create many services easy

copy `docker-compose.yml` to your `manager node` `sudo docker-machine scp docker-compose.yml machine1:/home/`

run docker service  with docker-compose file `sudo docker stack deploy --compose-file docker-compose.yml teststack`, when you deploy again and edit something on `docker-compose.yml` with the same `stack-name` then docker will update your change.

- list stack `sudo docker stack ls`

- inspect stack `sudo docker service ps [your_service_name]`

- remove stack `sudo docker rm teststack` (all services follow the task will be remove too)