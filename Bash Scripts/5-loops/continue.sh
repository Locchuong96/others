#! /bin/bash

for (( i=0 ; i<=10 ; i++ ))
do
	if [ $i -eq 3 ] || [ $i -eq 7 ]
	then
		continue # if i=3 or i=7 then skip, else print it out
	fi
	echo $i
done
