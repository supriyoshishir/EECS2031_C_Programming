#!/bin/bash

echo "What is your name:"
read username
var=xyz
while IFS=: read -r f1 f2 f3 f4 f5 f6 f7
do
if [ $username == $f1 ]
then 
	echo "Good day $f5"
	var=abc
fi
done < /etc/passwd 

if [ $var == xyz ]
then 
	echo "No such login name"
fi
