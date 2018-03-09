#!/bin/bash

listd=`ls -l . | grep 'drwxr\-xr\-x' | awk '{print $9}'`

for dir in $listd
do
    cd $dir
    listf=`ls -l . | grep '.cpp' | sed 's/.cpp//g' | awk '{print $9}'`
    for file in $listf
    do
        rm -f $file
        echo "Removed $file" 
    done
    cd ..
done
