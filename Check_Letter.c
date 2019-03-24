#include <stdio.h>
#include <string.h>

void main()
{
    char str[200];
    int other[100] = 0,digit[100]=0,letter[100]=0, word[100]=0,i=0,c=0;

    printf("enter the string\n");
    scanf("%[^\n]s", str);

    while(str[i]!='\0')
    {
        if (str[i] == ' ')
            word++;
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if(letter[])
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            other++;
        }

        i++;
    }

    printf("number of words in given string are: %d\n", word + 1);
    printf("number of Letter in given string are: %d\n", letter );
    printf("number of Digit in given string are: %d\n", digit);
    printf("number of other digit in given string are: %d\n", other);



}
