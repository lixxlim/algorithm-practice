#!/bin/bash

if [ $# -ge 1 ]; then
	kotlinc $1 -include-runtime -d run.jar
	if [ $? -eq 0 ]; then
		java -jar run.jar
		rm run.jar
	else
		echo "*Notice: It seems to be not installed kotlin complier. Please Run init process."
	fi
else
	echo "---------------------"
	ll src/*.kt | cut -c 45-
	echo "---------------------"
	echo "please input filename"
fi
