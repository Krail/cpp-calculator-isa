all:
	g++ file_io.cpp calc.cpp  main.cpp -o calc

clean:
	rm -rf binary.o calc