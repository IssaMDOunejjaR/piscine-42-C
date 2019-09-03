#!/bin/sh
find . | grep -E -o '([^\/]+$)' | wc -l | sed 's/ //g' 
