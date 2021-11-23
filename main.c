#include "my_mat.h"
#define N 10
int main() {
	char Select;
	int mat[N][N];
	do{
		scanf("%s", &Select);
		switch (Select)
		{
		case'A':
		{
			input(mat);
			break;
		}
		case'B': {
			Check_path(mat);
			break;
		}
		case 'C': {
			floydWarshalle(mat);
			break;
		}
		}
	} while (Select != 'D');
}
