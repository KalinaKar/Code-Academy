#!/bin/bash

TEST_FILE=kaliimitko

if [ ! -f "$TEST_FILE" ]; then
	echo "Binary file is not available, creating..." && gcc -g kaliimitko.c -o $TEST_FILE
fi

check_status() {
	if [ "$STATUS" -ne "0" ]
	then
		echo "ERROR! OH NO, IT IS GONNA BLOW!"
	else
		echo "ALL GOOD, MOVE ALONG!"
	fi
}

./$TEST_FILE 
STATUS=$? && check_status STATUS

exit 0