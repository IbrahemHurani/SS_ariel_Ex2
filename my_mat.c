#include "my_mat.h"
int min(int a, int b) {
	if (a<b) return a;
	else 
		return b;
}
void input(int mat[][N]) {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	floydWarshalle(mat);
}
void Check_path(int arr[][N]) {
	int i, j;
	scanf("%d", &i);
	scanf("%d", &j);
	if (arr[i][j] != 0 && arr[j][i] == arr[i][j]){
		printf("True");
	}
	else {
		printf("False");
	}
}
void floydWarshalle(int mat[][N]) {
	
	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (mat[i][k] != 0 &&mat[k][j] != 0) {
					mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
				}
			}
		}
	}
}
void C(int mat[][N]){
	int a, b;
	scanf("%d",&a);
	scanf("%d",&b);
	if(mat[a][b]!=0){
		printf("%d", mat[a][b]);
	}
	else {
		printf("-1");
	}

}

