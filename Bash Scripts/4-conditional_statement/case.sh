#! /bin/bash

car = $1

case $car in
   "BWM" )
	echo "It is BMW" ;;
   "MERCEDESE" )
	echo "It is MERCEDESE" ;;
   "TOYOTA" )
	echo "It is HONDA" ;;
   * )
	echo "UNKNOW car name" ;;
esac
