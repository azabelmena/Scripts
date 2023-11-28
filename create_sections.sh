#!/usr/bin/env bash

for i in $(seq $1 $2)
do
    touch section$i.tex
done
