#include <stdio.h>
int main(void)
{
	char name[][9] = { "—EÒ", "_Š¯", "–‚–@" };
	FILE* fp;
	fp = fopen("save_data.txt", "w");
	if (fp == NULL) {
		printf("file error\n");
		return -1;
	}
	for (int i = 0; i < 3; i++) {
		fprintf(fp, "%s\n", name[i]);
	}
	fclose(fp);
	printf("file ok");
	return 0;
}