#!/bin/sh
cat $1 | grep -i "NICOLAS.BAUER" | grep -o -E ".[0-9].+" | sed -E "s/[^2]+$//" | sed -E "s/^[[:space:]]+[0-9]+[[:space:]]+//"
