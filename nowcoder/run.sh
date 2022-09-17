#!/bin/bash
cd ..
rm -r p p.zip
cd nowcoder
g++ create.cpp -o create
./create
g++ solve.cpp -o solve
python ./init.py
mkdir ../p
mv *.in *.out  ../p
cd ..
zip -r p.zip p
cd nowcoder
rm create solve GenerateData