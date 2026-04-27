#ifndef HANOI_H
#define HANOI_H

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

extern int cnt;     //선언: 실제 메모리 어딘가 다른 파일에 정의되어 있음

int get_n_from_user(void);
void move(int n, char a, char b, char c);

#endif