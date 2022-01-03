#! /bin/bash

while read line

do
	echo "$line"

done < "${1:-/dev/stdin}" # you are reading a content storage in stdin if you read another text file < $filename
