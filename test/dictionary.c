#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dictionary.h"

// Define the dictionary entry structure
typedef struct s_dict
{
    char *number;
    char *words;
    struct s_dict *next;
} t_dict;

// Helper function to trim leading and trailing spaces
char *trim(char *str)
{
    char *end;
    while (*str == ' ')
        str++;
    if (*str == 0)
        return str;
    end = str + strlen(str) - 1;
    while (end > str && *end == ' ')
        end--;
    *(end + 1) = 0;
    return str;
}

// Check if a string is a positive number
int is_positive_number(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

// Parse the dictionary file
t_dict *parse_dictionary(char *filename)
{
    FILE *file = fopen(filename, "r");
    if (!file)
        return NULL;

    t_dict *dict = NULL;
    t_dict *current = NULL;
    char line[256];

    while (fgets(line, sizeof(line), file))
    {
        char *colon = strchr(line, ':');
        if (!colon)
            continue;

        *colon = 0;
        char *number = trim(line);
        char *words = trim(colon + 1);

        t_dict *entry = (t_dict *)malloc(sizeof(t_dict));
        entry->number = strdup(number);
        entry->words = strdup(words);
        entry->next = NULL;

        if (!dict)
            dict = entry;
        else
            current->next = entry;
        current = entry;
    }

    fclose(file);
    return dict;
}

// Convert a number to words using the dictionary
char *convert_number_to_words(t_dict *dict, char *number)
{
    while (dict)
    {
        if (strcmp(dict->number, number) == 0)
            return strdup(dict->words);
        dict = dict->next;
    }
    return NULL;
}

// Free the dictionary
void free_dictionary(t_dict *dict)
{
    while (dict)
    {
        t_dict *tmp = dict;
        dict = dict->next;
        free(tmp->number);
        free(tmp->words);
        free(tmp);
    }
}
