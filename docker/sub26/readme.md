**docker swarm volume**

only container in the same node can share a volume, you can share it with the other docker host (other node) if you use `driver local`

if you want to share volume with the other nodes, use driver with `network type` similarly `nfs`,`ssh`,`smb`

create image have `samba` for network driver

create volume inside container, map it with docker/volumes inside docker host