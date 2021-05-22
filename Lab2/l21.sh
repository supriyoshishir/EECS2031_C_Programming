for file in *; 
do
	if  [ -d "$file" ]; then 
	echo "$file is a directory"
	elif [ -x "$file" ]; then
	echo "$file is executable"
	else 
	echo "$file is not executable"
	fi
done
