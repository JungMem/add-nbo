#Makefile
all: add-nbo

add-nbo: add-nbo.cpp
	gcc -o add-nbo add-nbo.cpp

clean:
	rm -f add-nbo
