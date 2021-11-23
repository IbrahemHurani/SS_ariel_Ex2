#ifndef _my_mat
#define _my_mat
#include<stdio.h>
#include<math.h>
#define N 10
void input(int mat[][N]);
void Check_path(int arr[][N]);
int Check(int mat[][N],int i,int j);
void floydWarshalle(int mat[][N]);
#endif
