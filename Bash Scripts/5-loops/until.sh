#! /bin/bash

number=1
# while loop to condition is False, until loop to condition is True
until [ $number -ge 10 ]
do
	echo "$number"
	number=$(( number+1 ))
done
