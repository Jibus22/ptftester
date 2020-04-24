LIBPATH='.'
INCLUDEPATH='.'
LIBFTPATH='./libft'

if [ -e "libftprintf.a" ]; then
	rm -rf libftprintf.a;
fi

cd .. && Make;

cp $LIBPATH/libftprintf.a ./ptftester/libftprintf.a;
cp $INCLUDEPATH/ft_printf.h ./ptftester/ft_printf.h;
cp $LIBFTPATH/libft.h ./ptftester/libft.h;

cd ./ptftester;

if [ "$1" == "s" ]; then
	cd scripts && sh stest.sh && cd ..
elif [ "$1" == "x" ]; then
	cd scripts && sh xtest.sh && cd ..
elif [ "$1" == "c" ]; then
	cd scripts && sh ctest.sh && cd ..
elif [ "$1" == "u" ]; then
	cd scripts && sh utest.sh && cd ..
elif [ "$1" == "d" ]; then
	cd scripts && sh dtest.sh && cd ..
elif [ "$1" == "p" ]; then
	cd scripts && sh ptest.sh && cd ..
elif [ "$1" == "%" ]; then
	cd scripts && sh modtest.sh && cd ..
elif [ "$1" == "mix" ]; then
	cd scripts && sh mixtest.sh && cd ..
else
	cd scripts && sh alltest.sh && cd ..
fi
