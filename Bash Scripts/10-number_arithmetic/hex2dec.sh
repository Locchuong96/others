#! /bin/bash

echo "Enter your HEX number "

read Hex

echo -n "The decimal value if $Hex is : "

echo "obase=10; ibase=16; $Hex" | bc
