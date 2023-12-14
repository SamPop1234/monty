#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - representation of a struct using doublelist
 * @n: integer
 * @prev: previous element of the stack (or queue)
 * @next: next element of the stack (or queue)
 *
 * Description: LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - contains all variables -args, file, line content
 * @arg: args value
 * @file: this is a pointer to monty file
 * @content: content of a line
 * @lifi: flag change stack
 * Description: this structure carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - this validates the opcode and its function
 * @opcode: the parameter holding the  opcode
 * @f: function to handle the opcode
 * Descr: this validates the  opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void _push(stack_t **head, unsigned int number);
#endif
