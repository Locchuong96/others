FROM ubuntu:latest

RUN apt update
RUN apt install python3 -y

WORKDIR /usr/app/src

COPY print.py ./

CMD ["python3","./print.py"]
