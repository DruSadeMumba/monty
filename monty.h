#ifndef MONTY_SHELL
#define MONTY_SHELL
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 **/
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;
/**
 * struct stack - pointer to the top of the head
 * @top: pointer to the first node
 * Description: this function is pointing to the head
 * of the node
**/
typedef struct stack
{
stack_t *top;
} stack_handler;

/**
 * struct file_handler - variables -args, file, line content
 * @_args: value
 * @file: pointing to the file of monty
 * @inside: displaying line content
 * @value: status to change from stack to queue
 * Description: assiting for accessing the content in
 * program
 **/
typedef struct file_handler
{
char *_args;
char *inside;
FILE *file;
int value;
} value_t;

extern value_t data_set;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 **/
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void push(stack_handler *top, unsigned int line);
void pall(stack_handler *top, unsigned int line);
void pop(stack_handler *top, unsigned int line);
void pint(stack_handler *top, unsigned int line);
void swap(stack_handler *top, unsigned int line);
void add(stack_handler *top, unsigned int line);
void nop(stack_handler *top, unsigned int line);
void sub(stack_handler *top, unsigned int line);
void div_func(stack_handler *top, unsigned int line);
void mul(stack_handler *top, unsigned int line);
void mod(stack_handler *top, unsigned int line);
void pstr(stack_handler *top, unsigned int line);
void rotl(stack_handler *top, unsigned int line);
void rotr(stack_handler *top, unsigned int line);
void pchar(stack_handler *top, unsigned int line);
void stack(stack_handler *top, unsigned int line);
void queue(stack_handler *top, unsigned int line);

#endif




