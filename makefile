hepsi: derle calistir


derle:
	g++ -I ./include -o ./lib/Kova.o -c ./src/Kova.cpp
	
	g++ -I ./include -o ./lib/KovaKontrol.o -c ./src/KovaKontrol.cpp
	
	g++ -I ./include -o ./lib/Top.o -c ./src/Top.cpp
	
	g++ -I ./include -o ./bin/odev1 ./lib/Kova.o ./lib/KovaKontrol.o ./lib/Top.o ./src/Odev_1.cpp


calistir:

	./bin/odev1

