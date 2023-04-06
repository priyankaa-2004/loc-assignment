#include <stdio.h>
#include <string.h>
void main() 
{
    char s[100], ch, new_s[100];
    int i, j = 0,lstr;
    printf("Enter a string: ");
    scanf("%s",s);
    printf("Enter the character you want to remove: ");
    scanf("%c", &ch);
    lstr=strlen(s);
    for (i = 0; i < lstr; i++)
    {
        if (s[i] != ch) 
        {
            new_s[j++] = s[i];
        }
    }
    new_s[j] = '\0';
    printf("The string after removing %c: %s", ch, new_s);
}