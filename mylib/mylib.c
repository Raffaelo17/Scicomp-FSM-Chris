#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void state(int F1, int F2, int y1, int y2, int *F3, int *F4)
{
  *F3 = F1 & (!y1) & (!y2) | (!F1) & (!y1) & y2 | (!F1) & (!y1) & y2 | (!F2) & (!y1) & y2 | F1 & (!y1) & (!y2);
  *F4 = F2 & (!y1) & (!y2) | (!F2) & y1 & y2 | (!F1) & y1 & (!y2);
}

void output(int F1, int F2, int *z1, int *z2)
{
  *z1 = F1;
  *z2 = F2;
}
