build:
	gcc *.c -Wall -o notes -lsqlite3
clean:
	rm -rf notes
run:
	./notes