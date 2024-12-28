#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dictionary.h"

void print_error(char *msg)
{
    printf("%s\n", msg);
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 3)
    {
        print_error("Error");
        return 1;
    }

    char *dictionary_file = (argc == 3) ? argv[1] : "numbers.dict";
    char *number = (argc == 3) ? argv[2] : argv[1];

    if (!is_positive_number(number))
    {
        print_error("Error");
        return 1;
    }

    t_dict *dict = parse_dictionary(dictionary_file);
    if (!dict)
    {
        print_error("Dict Error");
        return 1;
    }

    char *result = convert_number_to_words(dict, number);
    if (!result)
    {
        print_error("Dict Error");
    }
    else
    {
        printf("%s\n", result);
        free(result);
    }

    free_dictionary(dict);
    return 0;
}
