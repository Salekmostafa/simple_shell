#include "head.h"

char *s_duplicate(const char *str) {
    char *ptr;
    int i, len = 0;

    if (str == NULL)
        return (NULL);

    len = s_length(str);
    ptr = malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
        return(NULL);

    for (i = 0; i < len; i++)
        ptr[i] = str[i];
    ptr[i] = '\0';

    return (ptr);
}

int s_compare(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int s_length(const char *s) {
    int len = 0;
    while (s[len])
        len++;
    return (len);
}

char *s_concatenate(char *dest, const char *src) {
    char *p = dest;

    while (*p) {
        p++;
    }

    while ((*p++ = *src++)) {
    }

    return (dest);
}

char *s_copy(char *dest, const char *src) {
    int i = 0;

    while ((dest[i] = src[i])) {
        i++;
    }

    return (dest);
}
