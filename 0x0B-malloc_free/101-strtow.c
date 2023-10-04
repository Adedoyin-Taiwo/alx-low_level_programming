#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Helper function to count the number of words in a string
int count_words(char *str)
{
    int count = 0;
    int is_word = 0;

    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            is_word = 0;
        }
        else if (!is_word)
        {
            count++;
            is_word = 1;
        }

        str++;
    }

    return count;
}

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    int num_words = count_words(str);

    char **word_array = (char **)malloc((num_words + 1) * sizeof(char *));

    if (word_array == NULL)
    {
        return NULL; // Memory allocation failed
    }

    int word_index = 0;
    int word_length = 0;
    int is_word = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            if (is_word)
            {
                word_array[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (word_array[word_index] == NULL)
                {
                    // Memory allocation failed, free previously allocated memory
                    for (int j = 0; j < word_index; j++)
                    {
                        free(word_array[j]);
                    }
                    free(word_array);
                    return NULL;
                }

                strncpy(word_array[word_index], &str[i - word_length], word_length);
                word_array[word_index][word_length] = '\0';
                word_index++;
                word_length = 0;
                is_word = 0;
            }
        }
        else
        {
            word_length++;
            is_word = 1;
        }
    }

    // Handle the last word
    if (is_word)
    {
        word_array[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (word_array[word_index] == NULL)
        {
            // Memory allocation failed, free previously allocated memory
            for (int j = 0; j < word_index; j++)
            {
                free(word_array[j]);
            }
            free(word_array);
            return NULL;
        }

        strncpy(word_array[word_index], &str[strlen(str) - word_length], word_length);
        word_array[word_index][word_length] = '\0';
        word_index++;
    }

    word_array[word_index] = NULL; // The last element of the array should be NULL

    return word_array;
}

int main()
{
    char *input = "This is a test string";
    char **words = strtow(input);

    if (words != NULL)
    {
        int i = 0;
        while (words[i] != NULL)
        {
            printf("%s\n", words[i]);
            free(words[i]); // Free each word
            i++;
        }
        free(words); // Free the array of words
    }
    else
    {
        printf("Memory allocation failed or input is empty.\n");
    }

    return 0;
}

