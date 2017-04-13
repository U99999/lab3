main: main.o
	g++ -o main main.o

clean:
	rm main *.o
