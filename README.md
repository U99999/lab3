Make file:
main: main.o
	g++ -o main main.o

clean:
	rm main *.o
  
QB:
size 1000
	running time   O(n log n)0.000412
	               O(n^2)    0.0097
10000
	running time   O(n log n)0.002475
	               O(n^2)    0.965248
100000
	running time   O(n log n)0.034357
	               O(n^2)    100.77

1000000
	running time   O(n log n)0.355869
	               O(n^2)    9487.28
  For  O(n log n)
  10n*log(10n)= 10n(log(n)+1)
  For all n is large, as the size of values increases by ten times, the running time also increases by ten times.
  For O(n^2)
  As the size of values increases by ten times, the running time increases by one hundred times.
