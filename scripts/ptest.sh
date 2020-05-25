#!/bin/bash

GREEN='\033[7;96m'
BLUE='\033[7;94m'
CEND='\033[0m'

COMP='clang -Wall -Wextra -Werror'
LINECOMMAND='-I ../ ../libftprintf.a' 

echo "\n\t\t\t${GREEN}		     ${CEND}"
echo "\t\t\t${GREEN}Testing ${CEND}${BLUE}  %p  ${CEND}${GREEN}  ...  ${CEND}"
echo "\t\t\t${GREEN}		     ${CEND}"

${COMP} pmainptf.c $LINECOMMAND -o ftptf.out;
./ftptf.out > tmp.txt;
cat -e tmp.txt > ftptf.txt;
cat -e ptest.txt > ptf.txt
rm -f tmp.txt ptest.txt;

echo "\nComparison of the 2 results files :";
if [ -e "res.log" ]; then
	rm -f res.log;
fi;

${COMP} maincmp.c lib.a -o Result.out;
./Result.out;

rm -f ftptf.out ptf.out Result.out;
cp ftptf.txt ../

if [ -e "res.log" ]; then
	cp res.log ../;
fi;

echo "\ncat ftptf.txt to watch your ft_printf behavior on each tests.\n";
