**docker registry**

resitry as `docker.io` (dockerhub)

image [user]/[image] if you don't give it a name, assume that user=image, user=account,image=repository

	image: ngnix
	image: docker.io/nginx/nginx

**private registry**

	docker login private-registry.io
	docker run private-registry.io/apps/internal-app

**Deploy Private Registry**

- deploy local docker registy, the name of image is `registry`: `sudo docker run -d -p 5000:5000 --name registry registry:2`
- create your own repository to the local registry host: `sudo docker image tag my-image localhost:5000/my-image`
- push your own image to the repository on the local host: `sudo docker push localhost:5000/my-image`
- let some one in the network pull your image: `sudo docker pull 192.168.56.100:5000/my-image`
