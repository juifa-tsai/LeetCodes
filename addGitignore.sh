#!/bin/bash

lists=`ls -l ./* | grep '\-rwxr\-xr\-x' | grep -v addGitignore.sh | awk '{print $9}'`

for file in $lists
do
    check=`grep $file .gitignore`
    if [ ! $check ]; then
        echo $file >> .gitignore
    fi
done 
