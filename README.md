Monty - Stacks and Queues - FIFO and LIFO:
This is a simple interpreter for Monty Byte code files.

Learning objectives:
What do LIFO and FIFO mean
What is a stack, and when to use it
What is a queue, and when to use it
What are the common implementations of stacks and queues
What are the most common use cases of stacks and queues
What is the proper way to use global variables
Environment
Language: C
Operating System: Ubuntu 20.04 LTS
Style guidelines: Betty style
Compiler: gcc
Note: The code will be compiled this way: gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

Usage
Usage: ./monty [filename]

git clone https://github.com/agusfl/monty.git
cd monty
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
./monty bytecodes/35.m
Description of each file:
Files	Desription
monty.h	Hold prototypes of functions, libraries, and headers used.
bf	brainfuck exercises - brainfuck is a esoteric programming language.
bytecodes	Testing files from Holberton.
tests	Custom files for testing our code.
main.c	Entry into program (main function).
push.c - opcode	Push an element to the stack or queue depending which command is given to the interpreter.
pall.c - opcode	Prints all the values on the stack, starting from the top of the stack.
pint.c -opcode	Prints the value at the top of the stack, follwed by a new line.
pop.c - opcode	Removes the top element of the stack.
swap.c - opcode	Swaps the top two elements of the stack.
add.c - opcode	Adds the top two elements of the stack.
nop.c - opcode	Does not do anything.
sub.c - opcode	Substracts the top element of the stack from the second top element of the stack.
div.c - opcode	Divides the second top element of the stack by the top element of the stack.
mul.c - opcode	Multiplies the second top element of the stack with the top element of the stack.
mod.c - opcode	Computes the rest of the division of the second top element of the stack by the top element of the stack.
pchar.c - opcode	Prints the char at the top of the stack, followed by a new line.
pstr.c - opcode	Prints the string starting at the top of the stack, followed by a new line.
rotl.c - opcode	Rotates the stack to the top.
rotr.c - opcode	Rotates the stack to the bottom.
stack.c - opcode	Sets the format of the data to a stack (LIFO) (this is the default behavior of the program).
queue.c - opcode	Sets the format of the data to a queue (FIFO).
Authors
Abraham Lincoln
