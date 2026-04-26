#ifndef HANOI_H
#define HANOI_H

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

extern int cnt;

int get_n_from_user(void);
void move(int n, char a, char b, char c);

#endif