#! /bin/bash

echo "press any key to continue"

# while loop with the condition is true
while [ true ] 
do
	read -t 3 -n 1 # -t stand for second, wait 3 seconds then print out 1 statement
if [ $? = 0 ]
then
	echo "you have terminated the script! "
	exit;
else
	echo "waiting for you to press any key..."
fi
done
