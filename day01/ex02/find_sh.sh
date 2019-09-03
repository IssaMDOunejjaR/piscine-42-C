#!/bin/sh
find . -type f -name "*.sh" | grep -E -o '([^\/]+$)' | sed 's/\.sh//'
