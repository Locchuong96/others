# this is a comment in docker
# Dockerfile, Image, Container
# FROM baseImage
FROM  python:3.8

# add the main.py into the container
ADD main.py .

# you can install python-packages by pip install or pip install -r requirements.txt
RUN pip install requests Beautifulsoup4

# specify the entry command, meaning when you run docker this command will activate the container
CMD ["python","./main.py"]