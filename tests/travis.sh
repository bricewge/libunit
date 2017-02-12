#!/bin/bash
tmp=`$(dirname $0)/tests`
echo "$tmp"
echo "$tmp" | tail -1 | grep "^1/4 tests checked$" -q
exit $?
