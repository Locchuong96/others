#! /bin/bash
# find the specific text and display second text after that

echo "Enter your filename"
read filename

if [[ -f $filename ]]
then
	awk '/know/ {print $2,$3}' $filename # awk '/know/ {print $3}' $filename
else
	echo "$filename doesn't exist"
fi
