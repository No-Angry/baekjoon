#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>

int main(void) {
	int input;
	char string[51];
	scanf("%d", &input);
	for (; input--;) {
		scanf("%s", string);
		int check = 0;
		for (int i = 0; string[i] != '\0'; i++) {
			if (string[i] == '(') check++;
			else if (string[i] == ')') check--;
			if (check < 0) break;
		}
		if (!check) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}