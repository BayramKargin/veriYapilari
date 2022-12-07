derlecalistir:program calistir

program:derle main
	g++ -g ./lib/Dugum.o ./lib/YoneticiDugum.o ./lib/ReadFile.o ./lib/SatirListesi.o ./lib/YoneticiListesi.o ./lib/Display.o ./lib/main.o -o ./bin/program
derle:
	g++ -g -I "./include" -c ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -g -I "./include" -c ./src/SatirListesi.cpp -o ./lib/SatirListesi.o
	g++ -g -I "./include" -c ./src/Display.cpp -o ./lib/Display.o
	g++ -g -I "./include" -c ./src/ReadFile.cpp -o ./lib/ReadFile.o
	g++ -g -I "./include" -c ./src/YoneticiDugum.cpp -o ./lib/YoneticiDugum.o
	g++ -g -I "./include" -c ./src/YoneticiListesi.cpp -o ./lib/YoneticiListesi.o
main:
	g++ -g -I "./include" -c ./src/main.cpp -o ./lib/main.o
calistir:
	./bin/program.exe