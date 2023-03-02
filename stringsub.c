#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strsub(char strr[], int ed, int de) {
  int strt = strlen(strr);
  int a; int b = 0;
  if (ed) {
    for (a = ed; a <= strt; a++) {
      strr[b] = strr[a];
      b++;
    }
  }
  strt = strlen(strr);
  int rde = strt - de;
  strr[rde] = '\0';
}

int main() {
  char str[55] = "teste";
  strsub(str, 2, 1);
  printf("%s", str);
  return 0;
}
