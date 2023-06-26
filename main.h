#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
int _printf(const char *format, ...);
int  print_char(char c);
void print_integer(int number);
void handle_i(int number);
int  print_string(char *s);
int to_decimal(int number, int flag);
#endif
