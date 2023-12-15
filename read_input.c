#include "head.h"

char *r_input(void) {
    char *input = NULL;
    size_t len = 0;
    ssize_t n;

    write(STDOUT_FILENO, "$ ", 2);

    if ((n = getline(&input, &len, stdin)) == -1) {
        perror("getline");
        return (NULL);
    }

    if (n > 0 && input[n - 1] == '\n') {
        input[--n] = '\0';
    }

    return (input);
}

char **t_input(char *input) {
    char *token = NULL, *tmp = NULL;
    char **cmd = NULL;
    int token_count = 0, i = 0;

    if (!input)
        return (NULL);
    tmp = s_duplicate(input);

    token = strtok(tmp, TOKEN_DELIMITER);
    if (token == NULL) {
        free(tmp), tmp = NULL;
        return (NULL);
    }

    while (token) {
        token_count++;
        token = strtok(NULL, TOKEN_DELIMITER);
    }
    free(tmp), tmp = NULL;

    cmd = malloc(sizeof(char *) * (token_count + 1));
    if (!cmd) {
        free(input), input = NULL;
        return (NULL);
    }

    token = strtok(input, TOKEN_DELIMITER);
    while (token) {
        cmd[i] = s_duplicate(token);
        token = strtok(NULL, TOKEN_DELIMITER);
        i++;
    }
    free(input), input = NULL;
    cmd[i] = NULL;
    return (cmd);
}

