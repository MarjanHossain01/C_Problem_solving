#include<stdio.h>
int main()
{
    int i,count=0;
    char ch;
    printf("Enter Anything: ");
    scanf("%c",&ch);

    for(i=65; i<=122; i++){
        if(ch == i){
            printf("Alphabet");
        }
        else{
            count++;
        }
    }
    if(count == 58){
        printf("Not alphabet");
    }

}
