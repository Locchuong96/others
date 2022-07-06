FROM alpine:latest

RUN apk update
RUN apk add python3 py3-pip
RUN mkdir app
COPY test.py app/test.py
WORKDIR app

ENTRYPOINT ["python3","test.py"]
