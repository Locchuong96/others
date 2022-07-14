#!/usr/bash

# uninstall old versions
apt-get remove docker docker-engine docker.io containerd runc
# set up the repository
apt-get update
# update apt package index and install packages to allow pat use repository over https
apt-get install ca-certificates curl gnupg lsb-release
# add docker's official GPG key
mkdir -p /etc/apt/keyrings
curl -fsSL https://download.docker.com/linux/ubuntu/gpg | gpg --dearmor -o /etc/apt/keyrings/docker.gpg
# use the following command to set up the repository
echo "deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.gpg] https://download.docker.com/linux/ubuntu \
  $(lsb_release -cs) stable" | tee /etc/apt/sources.list.d/docker.list > /dev/null
# install docker engine
# update the apt package index and install the lastest version of docker engine, containerd, and docker compose
apt-get update
apt-get install docker-ce docker-ce-cli containerd.io docker-compose-plugin
# verify that docker engine is installed correctly by running the hello-world
docker run hello-world
