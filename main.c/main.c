#include <stdio.h>
#include <unistd.h>

void compute_outputs(int A, int B, int C, int D, int *y1, int *y2)
{

    // writing equations
    *y1 = C;
    *y2 = D;
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
    for (int A = 0; A <= 1; A++)
    {
        for (int B = 0; B <= 1; B++)
        {
            for (int C = 0; C <= 1; C++)
            {
                for (int D = 0; D <= 1; D++)
                {
                    int y1, y2;
                    compute_outputs(A, B, C, D, &y1, &y2);
                    printf("\nCurrent Floor = %d%d | Input = %d%d \n\nOutput = %d%d\n\n", A, B, C, D, y1, y2);
                    sleep(1.8);
                }
            }
        }
    }
    return 0;
}