#include <stdlib.h>

char    *ft_strdup(const char *s)
{

    int i; //counter
    char *dup_str;

    i = 0;
    //count the number of characters in the original string
    while (s[i] != '\0') //could also use my ft_strlen()
    {
        i++;
    }

    dup_str = (char *)malloc(i * sizeof(char) + 1); //assign enough memory for the duplicate string
    if (dup_str == NULL) //if no memory was assigned to dup_str, just return 
    {
        return (NULL);
    }

    while (i >= 0)
    {
        dup_str[i] = s[i]; //duplication process
        i--;
    }
    dup_str[i] = '\0'; //string must end with '\0'
    return(dup_str);
    free(dup_str); //free the memory
}