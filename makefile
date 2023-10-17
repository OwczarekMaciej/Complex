TestComplex: TestComplex.o Complex.o
	g++ -g $^ -o $@

Complex.o: Complex.cpp Complex.h
	g++ -g -c -Wall -pedantic $< -o $@

TestComplex.o: TestComplex.cpp Complex.h
	g++ -g -c -Wall -pedantic $< -o $@

.PHONY: clean

clean:
	-rm Complex.o TestComplex.o TestComplex