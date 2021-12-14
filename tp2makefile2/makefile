OBJETS = main.o complexe.o 
CC = gcc
CFLAGS = -Wall
tp1Ex : $(OBJETS)
	$(CC) $(FLAGS) $(OBJETS) -o tp1Ex -lm
main.o : main.c complexe.h
	$(CC) $(FLAGS) -c main.c
complexe.o : complexe.c complexe.h
	$(CC) $(FLAGS) -c complexe.c
	
