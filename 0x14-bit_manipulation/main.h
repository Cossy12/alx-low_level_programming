#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
unsigned int binary_converse_uint(const char *q);
void print_out_binary(unsigned long int x);
int pint_get_bit(unsigned long int x, unsigned int l);
int set_alt_bit(unsigned long int *x, unsigned int l);
int clear_all_bit(unsigned long int *x, unsigned int l);
unsigned int flip_all_bits(unsigned long int x, unsigned long int q);
#endif

