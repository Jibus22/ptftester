GREEN='\033[7;96m'
BLUE='\033[7;94m'
CEND='\033[0m'

COMP='gcc -Wall -Wextra -Werror'
LINECOMMAND='-I ../ ../libftprintf.a' 

echo "\n\t\t\t${GREEN}		     ${CEND}"
echo "\t\t\t${GREEN}Testing ${CEND}${BLUE}  ALL  ${CEND}${GREEN} ...  ${CEND}"
echo "\t\t\t${GREEN}		     ${CEND}"

${COMP} ${LINECOMMAND} smainftptf.c -o s.out;
${COMP} ${LINECOMMAND} cmainftptf.c -o c.out;
${COMP} ${LINECOMMAND} umainftptf.c -o u.out;
${COMP} ${LINECOMMAND} dmainftptf.c -o d.out;
${COMP} ${LINECOMMAND} pmainptf.c -o p.out;
${COMP} ${LINECOMMAND} xmainftptf.c -o x.out;
${COMP} ${LINECOMMAND} modmainftptf.c -o mod.out;
${COMP} ${LINECOMMAND} mixmainptf.c -o mix.out;

./s.out > tmps.txt;
./c.out > tmpc.txt;
./u.out > tmpu.txt;
./d.out > tmpd.txt;
./p.out > tmpp.txt;
./x.out > tmpx.txt;
./mod.out > tmpmod.txt;
./mix.out > tmpmix.txt;

cat -e tmps.txt > ftptf.txt
cat -e tmpc.txt >> ftptf.txt
cat -e tmpu.txt >> ftptf.txt
cat -e tmpd.txt >> ftptf.txt
cat -e tmpp.txt >> ftptf.txt
cat -e tmpx.txt >> ftptf.txt
cat -e tmpmod.txt >> ftptf.txt
cat -e tmpmix.txt >> ftptf.txt

rm -f s.out c.out u.out p.out x.out d.out mix.out mod.out;
rm -f tmps.txt tmpc.txt tmpu.txt tmpd.txt tmpp.txt tmpx.txt tmpmod.txt tmpmix.txt;

${COMP} smainptf.c -o ps.out
${COMP} cmainptf.c -o pc.out
${COMP} umainptf.c -o pu.out
${COMP} dmainptf.c -o pd.out
${COMP} xmainptf.c -o px.out
${COMP} modmainptf.c -o pmod.out

./ps.out > ptmps.txt;
./pc.out > ptmpc.txt;
./pu.out > ptmpu.txt;
./pd.out > ptmpd.txt;
./px.out > ptmpx.txt;
./pmod.out > ptmpmod.txt;

cat -e ptmps.txt > ptf.txt
cat -e ptmpc.txt >> ptf.txt
cat -e ptmpu.txt >> ptf.txt
cat -e ptmpd.txt >> ptf.txt
cat -e ptest.txt >> ptf.txt
cat -e ptmpx.txt >> ptf.txt
cat -e ptmpmod.txt >> ptf.txt
cat -e tmp2.txt >> ptf.txt

rm -f ps.out pc.out pu.out px.out pd.out pmod.out;
rm -f ptmps.txt ptmpc.txt ptmpu.txt ptmpd.txt ptest.txt ptmpx.txt ptmpmod.txt tmp2.txt;

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
