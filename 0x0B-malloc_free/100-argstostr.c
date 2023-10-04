#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
    if (ac == 0 || av == NULL)
    {
        return NULL;
    }

    int total_length = 0;
    
    // Calculate the total length of the concatenated string
    for (int i = 0; i < ac; i++)
    {
        if (av[i] != NULL)
        {
            total_length += strlen(av[i]) + 1; // +1 for the newline character
        }
    }

    char *result = (char *)malloc(total_length + 1); // +1 for the null terminator
    
    if (result == NULL)
    {
        return NULL;
    }

    int position = 0;

    // Copy each argument followed by a newline character
    for (int i = 0; i < ac; i++)
    {
        if (av[i] != NULL)
        {
            strcpy(result + position, av[i]);
            position += strlen(av[i]);
            result[position++] = '\n';
        }
    }

    result[total_length] = '\0'; // Null-terminate the final string

    return result;
}

int main(int argc, char **argv)
{
    char *concatenated = argstostr(argc, argv);

    if (concatenated != NULL)
    {
        printf("%s", concatenated);
        free(concatenated); // Don't forget to free the memory when done
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
 
