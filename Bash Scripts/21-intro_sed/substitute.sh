#! /bin/bash

echo "Enter the filename you wanna substitute using sed"

read filename

if [[ -f $filename ]]

then 
	# sed -i 's/i/I/g' $filename # it will modify your file forever! make sure you want that change
	# sed 's/i/I/g' $filename > newtext.txt # this command will create a new text file with your change
	sed 's/Linux/Unix/g' $filename # change word
	# sed 's/i/I/g' $filename # this change just happen on this script, not change the file
	# cat text.txt | sed 's/i/I/g' # s standfor substitute, replace i by I, g standfor global

else 
	echo " $filename does not exist!"
fi
