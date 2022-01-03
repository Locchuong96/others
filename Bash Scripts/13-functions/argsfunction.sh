#! /bin/bash

function func()
{
	echo $1
	echo $2
	echo $(( $1 + $2 ))
}

func 1 2

