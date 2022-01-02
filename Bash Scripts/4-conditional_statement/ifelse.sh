#! /bin/bash

read -p "Enter your number: " number
if (( $number > 10 ))
then
   echo " The condition is true"
else
   echo " The condition is false"
fi
