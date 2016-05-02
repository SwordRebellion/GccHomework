main:main.o judge.o
	gcc main.o judge.o -o main
main.o:main.c
	gcc -c main.c
judge.o:judge.c
	gcc -c judge.c

clean:
	rm main *.o
