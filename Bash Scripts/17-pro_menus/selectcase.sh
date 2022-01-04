#! /bin/bash

select car in BMW MERCEDESE TESLA ROVER TOYOTA
do
	case $car in
	BMW)
		echo "BMW selected";;
	MERCEDESE)
		echo "MERCEDESE selected";;
	TESLA)
		echo "TESLA selected";;
	ROVER)
		echo "ROVER selected";;
	TOYOTA)
		echo "TOYOTA selected";;
	*)  # the other
		echo "ERROR, please select between (1-5)";;
	esac
done
