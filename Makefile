# Makefile 

makefile: calculator.cpp output.cpp
	g++ -o calc.o calculator.cpp output.cpp

# Target to clean files created during compilation
clean: 
	rm -f *.o  


