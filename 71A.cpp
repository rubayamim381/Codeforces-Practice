#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	int n, i, l;
	char ch[6000];

	scanf("%d", &n);

	//input string
	for (i = 0; i < n; i++) {
		scanf("%s", &ch);
		l = strlen(ch);

		if (l > 10) {
			printf("%c%d%c\n", ch[0], l - 2, ch[l - 1]);
		} else
			printf("%s\n", ch);
	}
	return 0;

}

/*
 4
 word
 localization
 internationalization
 pneumonoultramicroscopicsilicovolcanoconiosis
 */
