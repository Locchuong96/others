#! /bin/bash

car=('BWM' 'TOYOTA' 'HONDA' 'MERCEDESE' 'ROVER') # This is a array

echo "${car[@]}" # print out all element in car

echo "${car[0]}" # print out the first index

echo  "${!car[@]}" #print out all index of the array

echo "${#car[@]}" # print out the number of elements

unset car[2] # delete the element with index = 2

echo "${car[@]}"

echo "${!car[@]}"

car[2]="KIA"

echo "${car[@]}"

echo "${!car[@]}"


