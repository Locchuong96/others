#! /bin/bash

echo "Enter the filename to search text"

read filename

if [[ -f $filename ]] # if the file name exist
then
	echo "Enter the text to search "
	read grepvar # enter the words that you want to search
	grep -i -n -c $grepvar $filename # find the grepvar with that filename grep $grepvar $filenam, -i mean search with lowercase, -n meaning show the line contain that text, -c give you how many time that text appear in this text file, -v will give you the lines which not contain the text 

else
	echo "$filename does not exist!"
fi
