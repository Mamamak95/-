#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)






int main() {
	int ans[3];
	while (1) {
		
		srand(time(NULL));
		for (int i = 0; i < 3; i++) {
			int random = (rand() % 9) + 1;
			ans[i] = random;
		}
		if (ans[0] != ans[1] && ans[1] != ans[2] && ans[2] != ans[0]) {
			break;
		}

	}
	while (1) {
		printf("input number\n");
		int tryNum;
		scanf("%d", &tryNum);
		int ball = 0;
		int strike = 0;


		int one = tryNum % 10;
		int ten = (tryNum % 100)/10;
		int hund = tryNum / 100;
		if (ans[0] == hund) strike++;
		if (ans[1] == ten) strike++;
		if (ans[2] == one) strike++;
		for (int i = 0; i < 3; i++) {
			if (ans[i] == hund) ball++;
			if (ans[i] == ten) ball++;
			if (ans[i] == one) ball++;

		}
		if (strike == 3) { 
			printf("Homerun!!\n");
			break; 
		}
		printf("%dS%dB\n",strike,ball-strike);

	}
	return 0;
}