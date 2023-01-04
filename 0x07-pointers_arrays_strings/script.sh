#!/bin/bash
for passwrd in $(strings ./crackme2)
do
    printf "Trying: %s \n" "$passwrd"
    cp crackme2 temp.out
    ./temp.out $passwrd
    printf "\n"
done
