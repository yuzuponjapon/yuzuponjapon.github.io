#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	int q = (rand() % 99) + 1;

	int ans;
	while (1) {
		do {
			printf("1 〜 99 >");
			int scan = scanf("%d", &ans);
		} while (ans < 1 || 99 < ans);

		if (ans == q) {
			printf("正解\n");
			break;
		}
		else {
			if (ans > q) {
				printf("小さく\n");
			}
			else {
				printf("大きく\n");
			}
		}
	}
	return 0;
}



