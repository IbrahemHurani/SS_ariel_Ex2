#include "my_mat.h"

void input(int mat[][N]) {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
}
int min(int a, int b) {
	if (a<b) return a;
	else 
		return b;
}
void Check_path(int arr[][N]) {
	int i, j;
	scanf("%d", &i);
	scanf("%d", &j);
	if (arr[i][j] > 0 && arr[j][i] == arr[i][j])
		printf("True");
	else {
		printf("False");
	}
}
int Check(int mat[][N], int i, int j) {
	if (mat[i][j] > 0 && mat[j][i] == mat[i][j]) {
		return 1;
	}
	else {
		return 0;
	}
}
void floydWarshalle(int mat[][N]) {
	int tempMat[N][N] = { 0 };
	int i, j, k;
	for ( i=0; i < N; i++)
	{
		for ( j = 0; j < N; j++)
		{
			tempMat[i][j] = mat[i][j];

		}

	}
	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (tempMat[i][k] != 0 &&tempMat[k][j] != 0) {
					tempMat[i][j] = min(tempMat[i][j], tempMat[i][k] + tempMat[k][j]);
				}
			}
		}
	}
	int a, b;
	scanf("%d",&a);
	scanf("%d",&b);
	if (Check(mat, a, b) == 1) {
		printf("%d", tempMat[a][b]);
	}
	else {
		printf("-1");
	}

}

