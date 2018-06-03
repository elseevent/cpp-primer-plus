
objects=HashAlgorithmFactory.o main.o  

main.out:$(objects)  
	g++ -o main.out $(objects)

HashAlgorithmFactory.o:HashAlgorithmFactory.cpp
	g++ -c HashAlgorithmFactory.cpp

main.o:main.cpp
	g++ -c main.cpp

clean:  
	rm main.out $(objects)  
