#! /bin/bash

echo "Enter the file name you want to print out"
read filename

if [[ -f $filename ]]
then
	awk '{print}' $filename  # you must perform the awk function in the  '{}'
else
	echo "$filename does not exist"
fi
