#! /bin/bash

function checkfile()
{
	if [ -f $1 ]
		then
			myval=1
			echo "$1 is exist"
	else
		myval=0
		echo "$1 is not exist"
	fi
}

echo "Enter your file name"

read filename

# Check the file name exist
checkfile $filename

if [ $myval = 1 ]
then
	echo "Enter the text you want to append"
	read text
	echo "$text" >> $filename # > meaning replace, >> meaning append, filename, $filename the content in this file

fi
