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
  I a; I b = -1;
  if (ed) {
    for (a = ed; a <= strt; a++) {
      b++;
      strr[b] = strr[a];
    }
  }
  if (de) {
    strt = strlen(strr);
    I rde = strt - de;
    strr[rde] = '\0';
  }
}
