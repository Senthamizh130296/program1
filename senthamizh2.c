#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 
int main()
{
    char str[100], reverse[100];
    int len, i, ind, start, end;

    printf("Enter any string: ");
    gets(str);

    len   = strlen(str);
    ind = 0;
   start = len - 1;
    end   = len - 1;

    while(start > 0)
    {
        if(str[start] == ' ')
        {
         
            i = start + 1;
            while(i <= end)
            {
                reverse[ind] = str[i];

                i++;
                ind++;
            }
            reverse[ind++] = ' ';

            end = start - 1;
        }

        start--;
    }


    for(i=0; i<=end; i++)
    {
        reverse[ind] = str[i];
        ind++;
    }

    reverse[ind] = '\0'; 

    printf("Original string \n%s\n\n", str);
    printf("Reverse ordered words \n%s", reverse);

    return 0;
}
