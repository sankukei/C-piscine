#ifndef DICTIONARY_H
#define DICTIONARY_H

int is_positive_number(char *str);
typedef struct s_dict t_dict;
t_dict *parse_dictionary(char *filename);
char *convert_number_to_words(t_dict *dict, char *number);
void free_dictionary(t_dict *dict);

#endif
