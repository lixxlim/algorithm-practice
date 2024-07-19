#!/bin/bash

if [ $# -ge 1 ]; then
	kotlinc $1 -d run.jar
	if [ $? -eq 0 ]; then
		java -jar run.jar
		rm run.jar
	else
		echo "Not installed kotlin complier"
	fi
else
	echo "please input filename"
	echo "---------------------"
	ls *.kt
	echo "---------------------"
fi
