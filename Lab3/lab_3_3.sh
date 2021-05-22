#!/bin/bash

read string

if [[ $PWD = *$string* ]]

then

echo "YES"

else

echo "NO"

fi
 
