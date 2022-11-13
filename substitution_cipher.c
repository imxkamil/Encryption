#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
// Program's usage
if(argc!=2)
{
    printf("Usage: ./substitution key\n");
    return 1;
}
// Key validation - checking if key is full alphabet's lenght
if(strlen(argv[1]) != 26)
{
    printf("Key should remain 26 characters\n");
    return 1;
}
// Key validation - checking if characters in key belonging to the alphabet
for(int i=0; i<strlen(argv[1]); i++)
{
    if(!isalpha(argv[1][i]))
    {
        printf("%c is not an alphabet\n", argv[1][i]);
        return 1;
    }
}
// Key validation - checking if there is no doubling characters

for(int i=0; i<strlen(argv[1]); i++)
{
    if(isupper(argv[1][i]) == true)
    {
        for(int j=0; j<strlen(argv[1]); j++)
        {
            if(argv[1][i] == argv[1][j])
            {
                printf("%c is duplicate of %c\n", argv[1][i], argv[1][j]);
                return 1;
            }
        }
    }
    else if(isupper(argv[1][i]) == false)
    {
        for(int j=0; j<strlen(argv[1]); j++)
        {
                printf("%c is duplicate of %c\n", argv[1][i], argv[1][j]);
                return 1;
        }
    }
    else
        printf("Error 69");
}

// Key configuration, upper case 65-90, lower 97-122


string key = argv[1];
printf("The key: %s", key);
printf("\n");


string plaintext = get_string("Plaintext: ");



string ciphertext = "Ciphertext: ";


}
