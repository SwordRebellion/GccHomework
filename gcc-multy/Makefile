result:main multy
	gcc main.o multy.o -o result

main: main_clean main.c
	gcc -c -O0 main.c
main_optimize: main_clean main.c
	gcc -c -O2 main.c
main_clean:
	if [ -e main.o ] ; then rm main.o ; fi
	


multy: multy_clean multy.c
	gcc -c -O0 multy.c
multy_optimize: multy_clean multy.c
	gcc -c -O2 multy.c
multy_clean:
	if [ -e multy.o ] ; then rm multy.o ; fi
	

release: main_optimize multy_optimize
	gcc main.o multy.o -o release

diff: result release
	./result
	./release

clean:
	if [ -e result ] ; then rm result ; fi

	if [ -e release ] ; then rm release ; fi

	rm *.o
