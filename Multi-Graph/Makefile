CPP=g++ --std=c++11 -Wall
EXEC=TP6
SRC=$(wildcard Sources/*.cpp)
OBJ=$(SRC=.o)

all: $(EXEC)

TP6: Arete.o Sommet.o Graphe.o GarbageCollector.o Test.o Main.o
	$(CPP) -o $@ $^

Arete.o: Sources/Arete.cpp Headers/Arete.hpp
	$(CPP) -c $<

Sommet.o: Sources/Sommet.cpp Headers/Sommet.hpp
	$(CPP) -c $<

Graphe.o: Sources/Graphe.cpp Headers/Graphe.hpp Headers/Arete.hpp Headers/Sommet.hpp
	$(CPP) -c $<

GarbageCollector.o: Sources/GarbageCollector.cpp Headers/GarbageCollector.hpp
	$(CPP) -c $<

Test.o: Sources/Test.cpp Headers/Test.hpp
	$(CPP) -c $<

Main.o: Sources/Main.cpp Headers/Graphe.hpp Headers/GarbageCollector.hpp Headers/Test.hpp
	$(CPP) -c $<

clean :
	rm -rf *.o
	cd Sources; \
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)