#!/bin/bash
# Bash script that takes a URL and shows the Allowed OPTIONS
curl -sI -X OPTIONS "$1" | grep "Allow:" | cut -d " " -f 2-
