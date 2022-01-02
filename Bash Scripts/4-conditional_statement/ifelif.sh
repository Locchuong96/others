#! /bin/bash

read -p "What is your number?" number

if (( $number < 10 ))
then
   echo "your number smaller than 10"
elif (( $number  =10 ))
then
   echo "your number is equal 10"
else
   echo "your number is greater than 10"
fi
