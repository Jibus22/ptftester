COMP='gcc -Wall -Wextra -Werror'
GREEN='\033[7;96m'
BLUE='\033[7;94m'
CEND='\033[0m'

echo "\n\t\t\t${GREEN}		     ${CEND}"
echo "\t\t\t${GREEN}Testing ${CEND}${BLUE}  %d  ${CEND}${GREEN}  ...  ${CEND}"
echo "\t\t\t${GREEN}		     ${CEND}"

${COMP} ../../libftprintf.a -I ../.. -I ../../libft dmainftptf.c -o ftptf.out;
./ftptf.out > ftptf.txt;
${COMP} dmainptf.c -o ptf.out;
./ptf.out > ptf.txt;

echo "\nComparison of the 2 results files :";
if [ -e "res.log" ]; then
	rm -f res.log;
fi;

${COMP} maincmp.c libft.a -o Result.out;
./Result.out;

rm -f ftptf.out ptf.out Result.out;
cp ftptf.txt ../

if [ -e "res.log" ]; then
	cp res.log ../;
fi;

echo "\ncat ftptf.txt to watch your ft_printf behavior on each tests.\n";
