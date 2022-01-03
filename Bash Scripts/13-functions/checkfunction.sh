#! /bin/bash

function checkfunc()
{
	myreturn="The function is working right now" # This is the local variable

	#echo "$myreturn"
}

myreturn="This is not the variable from the function"
echo $myreturn

checkfunc
echo $myreturn
