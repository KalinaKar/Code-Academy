#!/bin/bash

TEST_FILE=kaliimitko
C_FILE=kaliimitko.c

if [ ! -f "$TEST_FILE" ]; then
	echo "Binary file is not available, creating..." && gcc -g $C_FILE -o $TEST_FILE
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