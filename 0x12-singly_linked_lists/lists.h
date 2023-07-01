#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 ** struct list_s - single linked
 ** @str: string - (malloc string)
 ** @len: length of the string
 ** @next: points
 **/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;

} list_t;
size_t list_len(const list_t *h);
#endif
