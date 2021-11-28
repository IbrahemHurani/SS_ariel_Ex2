#include "my_mat.h"
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
			C(mat);
			break;
		}
		}
	} while (Select != 'D');
}
