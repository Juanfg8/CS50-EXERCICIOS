    #include <stdio.h>
    #include "cs50.h"
    #include "cs50.c"

    int main (void)
    {
       int n;
       do
        {
            n = get_int("Size: ");
        }
        while (n < 1);

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                printf("#");
            } 
            printf("\n");
        }
        
    }
      