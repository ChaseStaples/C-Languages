#Chase Staples
#Makefile for Shell functions

CC = gcc;

shell: main.c shell.c vector.c builtin.c
    $(CC) -g $^ -o $@