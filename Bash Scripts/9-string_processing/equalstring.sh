#! /bin/bash

echo "enter 1st string"

read st1

echo "enter  2nd string"

read st2

if [ "$st1" == "$st2" ] # compare the value of 2 string
then 
	echo "String match!"
else
	echo "String does not match!"
fi
