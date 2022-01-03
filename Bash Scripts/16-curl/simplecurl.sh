#! /bin/bash

url="http://www.ovh.net/files/1Mio.dat" # the path for download 1mb data

# curl $url -O  # we use curl fo download as it's name
# curl $url -o 1Mb # option, download as file name 1Mb
# curl $url > outputfile # download as file name outputfile 

curl -I $url # show the header infomation of your file

dir
