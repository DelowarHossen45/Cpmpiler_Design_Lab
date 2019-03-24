#include<stdio.h>
#define MAX 60

int main(){
    char str[MAX];
    scanf("%[^\n]s", str);
    printf("String: %s\n",str);
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int word = 0;
    int letter = 0;
    int digit = 0;
    int otherchar = 0;
    char letters[30] = "";
    char digits[20] = "";
    char otherchars[10] = "";
    int check[200];
    for(i=0; str[i]!='\0'; i++){
        if(str[i]==' ')word++;
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)){
            letter++;
            letters[j] = str[i];
            j++;
        }
        else if((str[i]>=48 && str[i]<=57)){
            digit++;
            digits[k] = str[i];
            k++;
        }
        else{
            otherchar++;
            otherchars[l] = str[i];
            l++;
        }
    }
    word++;
    printf("The Number of Words is: %d\n", word);
    printf("The Number of Letters is: %d\n", letter);
    printf("The Number of Digits is: %d\n", digit);
    printf("The Number of Other Characters is: %d\n", otherchar);
    printf("Letters: ");
    for(i=0; i<200; i++){
        check[i]=0;
    }
    for(i=0;i<j; i++){
        if(check[letters[i]]==0){
            printf("%c ", letters[i]);
            check[letters[i]]=1;
        }
    }
    printf("\nDigits: ");
    for(i=0; i<k; i++){
        printf("%c ", digits[i]);
    }
    printf("\nOther Characters: ");
    for(i=0; i<l; i++){
        printf("%c ", otherchars[i]);
    }
    printf("\n");

    return 0;
}
