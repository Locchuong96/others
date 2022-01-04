#! /bin/bash

# create a folder, when you use inotifywait it will monitor every ection you do with this directory
# create a folder in temp directory
# echo "Enter the root password "
#read password
# sudo su $password

mkdir -p /temp/NewFolder

# use inode notify (inotify) linux kernel subsystem

inotifywait -m ./temp/NewFolder
