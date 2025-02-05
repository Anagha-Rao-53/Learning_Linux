#!/bin/bash
for i in { 1..5 }
	do
		if [ $((i%2)) -ne 0 ]; then
			echo "positive"
		else
			echo "negative"
		fi
	done
