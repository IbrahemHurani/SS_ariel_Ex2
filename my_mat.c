#include "my_mat.h"
#define N 10
void input(int mat[][N]) {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("Enter the value:\n");
			scanf("%d", &mat[i][j]);
		}
	}
}
void Check_path(int arr[][N]) {
	int i, j;
	printf("enter the first point:\n");
	scanf("%d", &i);
	printf("enter the second point:\n");
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
	int i, j;
	printf("enter the first point:\n");
	scanf("%d", &i);
	printf("enter the second point:\n");
	scanf("%d", &j);
	int k;
	int min = 10000000;
	if (Check(mat, i, j) == 1) {
		for (k = 0; k < 3; k++) {
			if ((mat[i][k] + mat[k][j] < mat[i][j]) && (mat[i][k] + mat[k][j] < min)) {
				min = mat[i][k] + mat[k][j];

			}

		}
		printf("%d", min);
	}
	else {
		printf("-1");
	}

}

