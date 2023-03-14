all:	EpisodeRater.exe	

EpisodeRater.exe:	Main.o	TVClass.o	Validation.o	EpisodeList.o	Node.o
	g++ -o EpisodeRater	Main.o TVClass.o Validation.o	EpisodeList.o	Node.o

TVClass.o:	TVClass.cpp	TVClass.h
	g++ -c TVClass.cpp

Main.o:	Main.cpp	TVClass.h	Node.h	EpisodeList.h
	g++ -c Main.cpp

Validation.o:	Validation.cpp	Validation.h
	g++	-c Validation.cpp

EpisodeList.o:	EpisodeList.cpp	EpisodeList.h
	g++	-c EpisodeList.cpp

Node.o:	Node.cpp	Node.h
	g++	-c Node.cpp

clean:
	rm -f *.o
	rm -f EpisodeRater