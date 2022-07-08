**how to create my own image**

1. OS-Ubuntu
2. Update apt repo
3. Install dependencies using apt
4. Install python dependencies using pip
5. Copy source code to /opt folder
6. Run the web server using "flask" command

Dockerfile

	[INSTRUCTION] [ARGUMENT]

Start from a base OS or another image

Install all dependencies

Copy source code

Specify the entrypoint


**layered architecture**

The docker will build layer-layer-layer-layer

**fail**

if a building the layer is fail, you can edit your dockerfile again and run build again `sudo docker build Dockerfile -t [your_image]`, it will make your building faster saving time

**What can you containerize**

You can containerize your repo, or any application, meaning you can containerize everything, nobody will install nothing naymore

**Example**

	FROM alpine:latest

	RUN apk update

	RUN apk add python3 py3-pip

	RUN pip install flask

	COPY . /opt/

	EXPOSE 8080

	WORKDIR /opt

	ENTRYPOINT ["python3", "app.py"]

**add new tag**

	 docker image tag SOURCE_IMAGE[:TAG] TARGET_IMAGE[:TAG]

**run with tag**

	docker run -p 8383:8080 [your_image]:[your_tag]
