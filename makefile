# Set my complier and flags
CC = g++
CFLAGS = -Wall -g

# Make the executable thing
main: main.o student.o roster.o
	$(CC) $(CFLAGS) -o main main.o student.o roster.o

# Make the individual .o files
main.o: main.cpp student.h roster.h degree.h
	$(CC) $(CFLAGS) -c main.cpp

student.o: student.cpp student.h degree.h
	$(CC) $(CFLAGS) -c student.cpp

roster.o: roster.cpp roster.h
	$(CC) $(CFLAGS) -c roster.cpp

# Clean it up after
clean:
	rm *.o main