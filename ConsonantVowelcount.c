#include<stdio.h>
#include<string.h>
#define MAX 15
int main()
{
    char vowelCheck[5][1] = {"a","e","i","o","u"};
    int i,j,vowel=0,consonant=0,space=0,digit=0;
    char ch[MAX];
    gets(ch);
    //Consonant & Vowel >>>
    for(i=0; i<strlen(ch); i++)
    {
        for(j=0; j<5; j++)
        {

            if (ch[i] == vowelCheck[j] || ch[i] == strupr(vowelCheck[j]))
            {
                vowel++;
            }

            else
            {
                consonant++;
            }
        }
        for(j=0; j<10; j++)
        {
            if(ch[i] == j)
            {
                digit++;
            }
        }


    }
    //Words and Digits
    for(i=0; i<strlen(ch); i++)
    {
        if(ch[i] == 32)
        {
            space++;
        }
    }
    for(i=0; i<strlen(ch); i++)
    {
        for(j=48; j<=57; j++)
        {
            if(ch[i] == j)
            {
                digit++;
            }
        }

    }

    printf("Vowel: %d\nConsonant: %d\nWords: %d\nDigits: %d",vowel,consonant, space+1,digit);


}
