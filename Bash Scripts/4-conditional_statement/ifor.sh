#! /bin/bash

read -p "What is your age? " age

# if [ $age lt 18 ] || [ $age -gt 40 ]
if [ $age -lt 18  -o $age -gt 40 ]
then
	echo "Age is correct"
else
	echo "Age is not correct"
fi
