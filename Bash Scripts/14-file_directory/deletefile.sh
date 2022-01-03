#! /bin/bash

function checkfile()
{
	if [ -f $1 ] # or if [[ -f $1 ]]
	then
		echo "$1 is existed!"
		myvar=1
	else
		echo "$1 is not existed!"
		myvar=0
	fi
}

echo "Enter your file name"

read filename

checkfile $filename

if [ $myvar = 1 ]
then
	echo "deleting $filename ..."
	rm $filename
fi
