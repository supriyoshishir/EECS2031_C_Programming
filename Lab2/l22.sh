#!/bin/bash

echo "What is your name?"

read varname
IFS=' ' read -r -a array <<< "$varname"

if [ "${#array[@]}" -gt 2 ]
then
echo "${array[0]} ${array[2]}"
else 
echo "${array[0]} ${array[1]}"
fi

