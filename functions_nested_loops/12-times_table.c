#include <stdio.h>

void print_times_table(int n)
{
    if (n < 0 || n > 15)  // Check if n is outside the valid range
    {
        return;
    }

    for (int i = 0; i <= n; i++)  // Loop for each row
    {
        for (int j = 0; j <= n; j++)  // Loop for each column
        {
            int product = i * j;

            if (j != 0)
            {
                printf(", ");
            }

            if (product < 10)
            {
                if (j != 0)
                    printf(" ");  // Align single-digit numbers
                printf("%d", product);
            }
            else if (product < 100)
            {
                printf("%d", product);
            }
            else
            {
                printf("%d", product);
            }
        }
        printf("\n");  // Print a new line after each row
    }
}

int main(void)
{
    print_times_table(5);
    return 0;
}
