#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 15
int main()
{
    char word[MAX_LENGTH];  // Adjust the size as needed
    int i,count;
    printf("Enter word: ");
    scanf("%s", word);

    printf("Flipped: %s",strrev(word));
    return 0;
}
