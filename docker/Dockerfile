# this is a comment in docker
# Dockerfile, Image, Container
# FROM baseImage
FROM  python:3.8

# add starting point working directory
WORKDIR /fastapi-app

# copy the requirement into the directory
COPY requirements2.txt .

# you can install python-packages by pip install or pip install -r requirements.txt
RUN pip install -r requirements2.txt

# copy the app floder on your machine into the container
COPY ./app ./app

# specify the entry command, meaning when you run docker this command will activate the container
CMD ["python","./app/main.py"]