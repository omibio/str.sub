#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int I;

extern char str[55] = "teste";
I main() {
	strsub(str, 1, 1);
	printf("%s", str);
	return 0;
}

void strsub(char strr[], I ed, I de) {
	I strt = strlen(strr);
	I i;
	I x = strt -1;
	I total[x];
	for(i = 0;i < strt; i++) {
		total[i] = i;
		if (ed && i < ed) {
            strr[i] = '\b';
		}
		if (de && x -de < i){
            strr[i] = '\b';
		}
	}
}
