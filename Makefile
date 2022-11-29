target: main.o
	g++ -g -o minstk main.cc

main.o: main.cc
	g++ -g -c main.cc

clean:
	\rm *.o minstk
	\rm -rf *.dSYM
