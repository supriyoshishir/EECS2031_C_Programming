#!/bin/bash

filename1="$1"
filename2="$2"
while read -r line1
do
IFS='	' read -r -a array1 <<< "$line1"
	while read -r line2
	do
		IFS='	' read -r -a array2 <<< "$line2"
		if [ ${array1[0]} == ${array2[1]} ]
		then
			echo "${array2[0]}	${array1[1]}"
		fi
	done < "$filename1"
done < "$filename2"
