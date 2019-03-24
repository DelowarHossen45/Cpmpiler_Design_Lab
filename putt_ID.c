#include <stdio.h>
#include <string.h>

void main()
{
    char str[100]="Md. Tareq Zaman, Part- 3, 2019";
    char id[100];
    //int other[100] = 0,digit[100]=0,letter[100]=0, word[100]=0,i=0,c=0;
    int i=0,word=0;
    //printf("enter the string\n : ");
   printf("%s\n",str);

    while(str[i]!='\0')
    {
        if (str[i] == ' ')
            {
                printf(" <id> ");
            }

        i++;
    }
    printf(" <2019> ");

   // printf("number of words in given string are: %d\n", word + 1);
}
