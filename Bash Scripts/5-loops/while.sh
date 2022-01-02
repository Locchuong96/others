#! /bin/bash

number=1
while [ $number -lt 10 ]
do
	echo "$number"
	number=$(( number+1 )) # add 1
done
