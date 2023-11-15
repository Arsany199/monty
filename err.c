#include "monty.h"

int usage_error(void);
int malloc_error(void);
int f_open_error(char *filename);
int unknown_op_error(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);
int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * usage_error - Prints usage error messages
 * Return: (EXIT_FAILURE)
 */
int usage_error(void)
{
	printf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * malloc_error - Prints malloc error messages
 * Return: (EXIT_FAILURE)
 */
int malloc_error(void)
{
	printf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * f_open_error - Prints file opening error messages
 * @filename: Name of file failed to open
 * Return: (EXIT_FAILURE)
 */
int f_open_error(char *filename)
{
	printf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * unknown_op_error - Prints unknown instruction error messages
 * @opcode: Opcode where error occurred
 * @line_number: Line number in Monty bytecodes file where error occured
 * Return: (EXIT_FAILURE)
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
	printf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * no_int_error - Prints invalid monty_push argument error messages
 * @line_number: Line number in Monty bytecodes file where error occurred
 * Return: (EXIT_FAILURE)
 */
int no_int_error(unsigned int line_number)
{
	printf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pop_error - Prints pop error messages for empty stacks
 * @line_number: Line number in script where error occured
 * Return: (EXIT_FAILURE)
 */
int pop_error(unsigned int line_number)
{
	printf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - Prints pint error messages for empty stacks
 * @line_number: Line number in Monty bytecodes file where error occurred
 * Return: (EXIT_FAILURE)
 */
int pint_error(unsigned int line_number)
{
	printf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - Prints monty math function error messages
 * @line_number: Line number in Monty bytecodes file where error occurred
 * @op: Operation where the error occurred
 * Return: (EXIT_FAILURE)
 */
int short_stack_error(unsigned int line_number, char *op)
{
	printf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - Prints division error messages
 * @line_number: Line number in Monty bytecodes file where error occurred
 * Return: (EXIT_FAILURE)
 */
int div_error(unsigned int line_number)
{
	printf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - Prints pchar error messages for empty stacks
 * @line_number: Line number in Monty bytecodes file where error occurred
 * @message: The corresponding error message to print
 * Return: (EXIT_FAILURE)
 */
int pchar_error(unsigned int line_number, char *message)
{
	printf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
