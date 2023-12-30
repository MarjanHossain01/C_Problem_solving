#include<stdio.h>
#include<string.h>
int main()
{
    int i,capital=0,small=0,digit=0;
    char ch[20];
    gets(ch);
    while(ch[i] != '\0')
    {
        if(ch[i] >= 97 && 122 >= ch[i]){
            small++;
        }
        else if(ch[i] >= 65 && 97 >= ch[i]){
            capital++;
        }
        else if(ch[i] >= 48 && 57 >= ch[i]){
            digit++;
        }
        i++;
    }
    printf("Capital :%d\nSmall :%d\nDigit :%d",capital,small, digit);
}
