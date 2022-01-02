#! /bin/bash

read -p  "Enter the your value greater (-gt): " count

if [ $count -gt 9 ]
then
   echo "The condition is true"
else
   echo "The condition is false"

fi
