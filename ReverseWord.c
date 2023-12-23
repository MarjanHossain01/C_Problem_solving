#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 15
int main()
{
    char word[MAX_LENGTH];  // Adjust the size as needed
    int i,count;
    printf("Enter word: ");
    scanf("%s", word);

    printf("%d characters",strlen(word));
    count = strlen(word);

    for(i=count; i>=0; i--){
        printf("%c",word[i]);
    }
    return 0;
}
