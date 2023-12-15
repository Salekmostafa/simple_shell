#ifndef HEAD_H
#define HEAD_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>

#define TOKEN_DELIMITER " \t\n"

int main(int argc, char **argv);
extern char **s_env;
void f_2d_array(char ***arr);

/**
 * r_input - Reads a line of input from the user.
 *
 * Return: Returns the input line as a string.
 */
char *r_input(void);

/**
 * t_input - Tokenizes an input line into an array of strings.
 * @input: The input line to be tokenized.
 *
 * Return: Returns an array of strings representing the tokens.
 */
char **t_input(char *input);

/**
 * s_duplicate - Duplicates a string.
 * @str: The string to be duplicated.
 *
 * Return: Returns the duplicated string.
 */
char *s_duplicate(const char *str);

/**
 * s_compare - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Returns an integer less than, equal to, or greater than zero
 * if s1 is found, respectively, to be less than, to match, or be greater than s2.
 */
int s_compare(const char *s1, const char *s2);

/**
 * s_length - Calculates the length of a string.
 * @s: The string to measure.
 *
 * Return: Returns the length of the string.
 */
int s_length(const char *s);

/**
 * s_concatenate - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Returns the concatenated string.
 */
char *s_concatenate(char *dest, const char *src);

/**
 * s_copy - Copies one string to another.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: Returns the copied string.
 */
char *s_copy(char *dest, const char *src);

/**
 * e_command - Executes a command.
 * @command: An array of strings representing the command and its arguments.
 * @argv: An array of strings representing the program arguments.
 *
 * Return: Returns the exit status of the executed command.
 */
int e_command(char **command, char **argv);

#endif
