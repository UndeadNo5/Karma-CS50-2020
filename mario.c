// Creates a # pyramid based on user input height
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;
    while (height < 1 || height > 8)
    {    
        height = get_int("Height 1-8: ");
    }
    for (int i = 1; i < height + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = height - i; k > 0; k--)
            {
                if (j > 0)
                {    
                    break;
                }    
                printf(" ");
            }        
            printf("#");
        }
        printf("\n");
    }
    
}
   
