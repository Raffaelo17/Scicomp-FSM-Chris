#include <stdio.h>
#include <unistd.h>

void compute_outputs(int F1, int F2, int F3, int F4, int *y1, int *y2)
{

    // writing equations
    *y1 = F3;
    *y2 = F4;
    // First Floor Button
    if (*y1 == 0 && *y2 == 0)
    {
        printf("\033[35m");
        printf("=================\n"
               "|  First Floor  |\n"
               "=================\n");
    }
    // Second Floor Button
    else if (*y1 == 0 && *y2 == 1)
    {
        printf("\033[36m");
        printf("==================\n"
               "|  Second Floor  |\n"
               "==================\n");
    }
    // Third Floor Button
    else if (*y1 == 1 && *y2 == 0)
    {
        printf("\033[31m");
        printf("=================\n"
               "|  Third Floor  |\n"
               "=================\n");
    }
    // Fourth Floor Button
    else
    {
        printf("\033[32m");
        printf("==================\n"
               "|  Fourth Floor  |\n"
               "==================\n");
    }
}

int main()
{
    for (int F1 = 0; F1 <= 1; F1++)
    {
        for (int F2 = 0; F2 <= 1; F2++)
        {
            for (int F3 = 0; F3 <= 1; F3++)
            {
                for (int F4 = 0; F4 <= 1; F4++)
                {
                    int y1, y2;
                    compute_outputs(F1, F2, F3, F4, &y1, &y2);
                    printf("\nCurrent Floor = %d%d \n\nInput = %d%d \n\nOutput = %d%d\n\n", F1, F2, F3, F4, y1, y2);
                    sleep(1.8);
                }
            }
        }
    }
    return 0;
}