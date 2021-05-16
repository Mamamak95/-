#include <stdio.h>
#pragma warning (disable:4996)
int map(int a,int b) {
	int c[5][5] = {
		{0,1,0,0,0},
		{1,0,1,0,0},
		{0,1,0,0,0},
		{1,0,1,0,0},
		{1,0,0,1,0},
	};
	return c[a][b];
}
int main() {

	int b[1][5];
	for (int i = 0; i < 5; i++) {
		b[0][i] = i + 1;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (map(i, j) == 1) {
				int m = b[0][j];
				b[0][j] = b[0][j + 1];
				b[0][j + 1] = m;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%d", b[0][i]);
	}
}