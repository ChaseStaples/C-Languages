#Chase Staples
#Makefile for Shell functions

CC = gcc;

shell: main.c shell.c vector.c
    $(CC) -g $^ -o $@