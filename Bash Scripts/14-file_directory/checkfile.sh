#! /bin/bash

echo "Enter your file name"

read filename

if [ -f $filename ] # -d for check directory and -f for check file
then
	echo "$filename Your file is already exist"

else
	echo "$filename Your file does not exist"

fi

