FROM ubuntu:latest

RUN apt-get update
RUN apt install python3 -y
RUN apt-get -y install python3-pip

WORKDIR = /usr/app/scr

# copy file
COPY app.py ./
# add floder
ADD ./templates ./templates

RUN pip3 install flask

CMD ["python3","./app.py"]
