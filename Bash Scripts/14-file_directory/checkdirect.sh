#! /bin/bash

echo "Enter directory name to check"

read direct

if [ -d "$direct" ] # -d help you to check the directory
then
	echo "your directory exist!"
else
	echo "directory does not exist"

fi
