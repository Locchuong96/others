#! /bin/bash

echo "Enter your text file "
read filename

if [[ -f $filename ]]
then
	# why i can not put my keyword into a command
	awk '/honey/ {print}' $filename
else
	echo "$filename does not exist "
fi
