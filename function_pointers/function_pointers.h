#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
#endif
