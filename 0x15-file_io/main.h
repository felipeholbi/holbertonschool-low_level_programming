#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>/*exit*/
#include <stdlib.h>/*exit*/
/* */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>/*open,*/

#include <unistd.h>/*write,close,read*/

#include <limits.h>/*ssize_t*/
#include <stdio_ext.h>/*size of the buffer*/

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *s);
int append_text_to_file(const char *filename, char *text_content);
void copie_content(const char *src, const char *dest);
#endif/*MAIN_H*/
