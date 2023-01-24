#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

int main()
{
  int F1 = 0, F2 = 0, F3 = 0, F4 = 0, y1 = 0, y2 = 0, z1 = 0, z2 = 0;
  while (true)
  {
    if (F3 == 0 && F4 == 0)
    {
      printf("\033c");
      printf("\033[35m");
      printf("=================\n"
             "|  First Floor  |\n"
             "=================\n");
      printf("\n\n\nFirst Floor!\n\n\n");
      printf("Current state: %d%d\n", F1, F2);
      printf("Output: %d%d\n", z1, z2);
      printf("Input: %d%d\n", y1, y2);
      printf("\n");
    }
    else if (F3 == 0 && F4 == 1)
    {
      printf("\033c");
      printf("\033[36m");
      printf("==================\n"
             "|  Second Floor  |\n"
             "==================\n");
      printf("\n\n\nSecond Floor!\n\n\n");
      printf("Current state: %d%d\n", F1, F2);
      printf("Output: %d%d\n", z1, z2);
      printf("Input: %d%d\n", y1, y2);
      printf("\n");
    }
    else if (F3 == 1 && F4 == 0)
    {
      printf("\033c");
      printf("\033[31m");
      printf("==================\n"
             "|  Third Floor   |\n"
             "==================\n");
      printf("\n\n\nThird Floor!\n\n\n");
      printf("Current state: %d%d\n", F1, F2);
      printf("Output: %d%d\n", z1, z2);
      printf("Input: %d%d\n", y1, y2);
      printf("\n");
    }
    else if (F3 == 1 && F4 == 0)
    {
      printf("\033c");
      printf("\033[32m");
      printf("==================\n"
             "|  Fourth Floor  |\n"
             "==================\n");
      printf("\n\n\nFourth Floor!\n\n\n");
      printf("Current state: %d%d\n", F1, F2);
      printf("Output: %d%d\n", z1, z2);
      printf("Input: %d%d\n", y1, y2);
      printf("\n");
    }

    printf("\nEnter an input (0(none), 1, 2, 3(both):");
    int input;
    scanf("%d", &input);
    if (input == 0)
    {
      y1 = 0;
      y2 = 0;
    }
    else if (input == 1)
    {
      y1 = 1;
      y2 = 0;
    }
    else if (input == 2)
    {
      y1 = 0;
      y2 = 1;
    }
    else if (input == 3)
    {
      y1 = 1;
      y2 = 1;
    }
    else
    {
      y1 = 0;
      y2 = 0;
    }

    state(F1, F2, F3, F4, &y1, &y2);
    F1 = F3;
    F2 = F4;
    output(F1, F2, &z1, &z2);
  }
  return 0;
}