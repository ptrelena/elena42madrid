/*
EXERCISE #1

Assignment name  : print_memory
Expected files   : print_memory.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that takes (const void *addr, size_t size), and displays the
memory as in the example.

Your function must be declared as follows:

void	print_memory(const void *addr, size_t size);

---------
$> cat main.c
void	print_memory(const void *addr, size_t size);

int	main(void)
{
	int	tab[10] = {0, 23, 150, 255,
	              12, 16,  21, 42};

	print_memory(tab, sizeof(tab));
	return (0);
}
$> gcc -Wall -Wall -Werror main.c print_memory.c && ./a.out | cat -e
0000 0000 1700 0000 9600 0000 ff00 0000 ................$
0c00 0000 1000 0000 1500 0000 2a00 0000 ............*...$
0000 0000 0000 0000                     ........$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*s++);
}

void	ft_printhex(int n)
{
	int c;

	if (n >= 16)
		ft_printhex(n / 16);
	c = n % 16 + (n % 16 < 10 ? '0' : 'a' - 10);
	ft_putchar(c);
}

void	ft_printchars(unsigned char c)
{
	ft_putchar((c > 31 && c < 127) ? c : '.');
}

void	print_memory(const void *addr, size_t size)
{
	unsigned char *t = (unsigned char *)addr;
	size_t		i = 0;
	int			col;
	size_t		tmp = 0;

	while (i < size)
	{
		col = -1;
		tmp = i;
		while (++col < 16)
		{
			if (i < size)
			{
				if (t[i] < 16)
					ft_putchar('0');
				ft_printhex(t[i]);
			}
			else
				ft_putstr("  ");
			ft_putchar((i++ & 1) << 6);
		}
		col = -1;
		i = tmp;
		while (++col < 16 && i < size)
			ft_printchars(t[i++]);
		ft_putchar('\n');
	}
}

void	print_memory(const void *addr, size_t size);

int		main(void)
{
	int		tab[15] = {3772900067, 58597, 59111,
		59625, 60139, 60653, 61167, 61681, 62195, 62709, 63223, 63737, 64251,
	64765, 65279};

	print_memory(tab, sizeof(tab));
	return (0);
}


/*
EXERCISE #2

Assignment name  : brackets 
Expected files   : *.c *.h
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes an undefined number of strings in arguments. For each
argument, the program prints on the standard output "OK" followed by a newline 
if the expression is correctly bracketed, otherwise it prints "Error" followed by
a newline.

Symbols considered as 'brackets' are brackets '(' and ')', square brackets '[' 
and ']'and braces '{' and '}'. Every other symbols are simply ignored.

An opening bracket must always be closed by the good closing bracket in the 
correct order. A string which not contains any bracket is considered as a 
correctly bracketed string.

If there is no arguments, the program must print only a newline.

Examples :

$> ./brackets '(johndoe)' | cat -e
OK$
$> ./brackets '([)]' | cat -e
Error$
$> ./brackets '' '{[(0 + 0)(1 + 1)](3*(-1)){()}}' | cat -e
OK$
OK$
$> ./brackets | cat -e
$
$>
*/

#include <unistd.h>

int	braclose(char *str, char c, int i, int b)
{
	while (b && *(++str) && (i++))
		if (*str == c || *str == c + c % 2 + 1)
			*str == c ? ++b : --b;
	return (i);
}

int	brackets(char *str, char c)
{
	if (*str == c)
		return (1);
	else if (!*str || *str == ')' || *str == '}' || *str == ']')
		return (0);
	else if (*str == '(' || *str == '{' || *str == '[')
		return (brackets(str + 1, *str + *str % 2 + 1)
			* brackets(str + braclose(str, *str, 1, 1), c));
	else
		return (brackets(str + 1, c));
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
		while (++i < ac)
			brackets(av[i], 0) ? write(1, "OK\n", 3) : write(1, "Error\n", 6);
	else
		write(1, "\n", 1);
	return (0);
}


/*
EXERCISE #3

Assignment name  : rpn_calc
Expected files   : *.c, *.h 
Allowed functions: atoi, printf, write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string which contains an equation written in
Reverse Polish notation (RPN) as its first argument, evaluates the equation, and
prints the result on the standard output followed by a newline. 

Reverse Polish Notation is a mathematical notation in which every operator
follows all of its operands. In RPN, every operator encountered evaluates the
previous 2 operands, and the result of this operation then becomes the first of
the two operands for the subsequent operator. Operands and operators must be
spaced by at least one space.

You must implement the following operators : "+", "-", "*", "/", and "%".

If the string isn't valid or there isn't exactly one argument, you must print
"Error" on the standard output followed by a newline.

All the given operands must fit in a "int".

Examples of formulas converted in RPN:

3 + 4                   >>    3 4 +
((1 * 2) * 3) - 4       >>    1 2 * 3 * 4 -  ou  3 1 2 * * 4 -
50 * (5 - (10 / 9))     >>    5 10 9 / - 50 *

Here's how to evaluate a formula in RPN:

1 2 * 3 * 4 -
2 3 * 4 -
6 4 -
2

Or:

3 1 2 * * 4 -
3 2 * 4 -
6 4 -
2

Examples:

$> ./rpn_calc "1 2 * 3 * 4 +" | cat -e
10$
$> ./rpn_calc "1 2 3 4 +" | cat -e
Error$
$> ./rpn_calc |cat -e
Error$
*/

/*
Create your own library.

#ifndef RPN_CALC_H
# define RPN_CALC_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct	s_s
{
	int			i;
	struct s_s	*next;
}				t_s;

int		check_input(char *s);

void	rpn_calc(char *s);
void	push(t_s **stack, int i);
int		pop(t_s **stack);
int		do_op(int i, int j, char o);

int		is_op(int c);
int		is_digit(int c);
int		is_space(int c);

#endif
*/

#include "rpn_calc.h"


void	rpn_calc(char *s)
{
	t_s	**stack;
	int	num1;
	int	num2;

	if (!(stack = (t_s **)malloc(sizeof(t_s*))))
		return ;
	while (*s)
	{
		while (*s && is_space(*s))
			s++;
		if (*s && is_digit(*s))
		{
			push(stack, atoi(s));
			while (*s && is_digit(*s))
				s++;
		}
		else if (*s && is_op(*s))
		{
			if (*(s + 1) && is_digit(*(s + 1)))
			{
				push(stack, atoi(s));
				s++;
				while (is_digit(*s))
					s++;
			}
			else {
				num1 = pop(stack);
				num2 = pop(stack);
				if (num2 == 0 && (*s == '/' || *s == '%'))
				{
					printf("Error\n");
					return ;
				}
				push(stack, do_op(num1, num2, *s));
				s++;
			}
		}
	}
	printf("%i\n", (*stack)->i);
	
}

void	push(t_s **stack, int i)
{
	t_s	*link;

	if (!(link = (t_s *)malloc(sizeof(t_s))))
		return ;
	link->i = i;
	if (*stack)
	{
		link->next = *stack;
		*stack = link;
	}
	else
	{
		link->next = *stack;
		stack = &link;
	}
}

int		pop(t_s **stack)
{
	int	num;
	t_s *tmp;

	num = (*stack)->i;
	tmp = (*stack);
	*stack = (*stack)->next;
	free(tmp);
	return (num);
}

int	do_op(int i, int j, char c)
{
	if (c == '+')
		return (i + j);
	else if (c == '-')
		return (i - j);
	else if (c == '*')
		return (i * j);
	else if (c == '/')
		return (i / j);
	else if (c == '%')
		return (i % j);
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 2 && check_input(av[1]))
		rpn_calc(av[1]);
	else
		printf("Error\n");
	return (0);
}


/*
EXERCISE #4

Assignment name  : options
Expected files   : *.c *.h
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes an undefined number of arguments which could be 
considered as options and writes on standard output a representation of those
options as groups of bytes followed by a newline.

An option is an argument that begins by a '-' and have multiple characters 
which could be : abcdefghijklmnopqrstuvwxyz

All options are stocked in a single int and each options represents a bit of that
int, and should be stocked like this : 

00000000 00000000 00000000 00000000
******zy xwvutsrq ponmlkji hgfedcba

Launch the program without arguments or with the '-h' flag activated must print
an usage on the standard output, as shown in the following examples.

A wrong option must print "Invalid Option" followd by a newline.

Examples :
$>./options
options: abcdefghijklmnopqrstuvwxyz
$>./options -abc -ijk
00000000 00000000 00000111 00000111
$>./options -z
00000010 00000000 00000000 00000000
$>./options -abc -hijk
options: abcdefghijklmnopqrstuvwxyz
$>./options -%
Invalid Option
*/

#include <unistd.h>

int main(int ac, char **av)
{
	int i = 1;
	int  t[32] = {0}; 
	int j ;

	if(ac == 1)
	{
		write(1,"options: abcdefghijklmnopqrstuvwxyz\n",36);
		return 0;
	}
	i = 1;
	while (i < ac)
	{
		j = 1;
		if(av[i][0] == '-')
		{
			while(av[i][j] && av[i][j] >= 'a'  && av[i][j] <= 'z')
			{
				if(av[i][j] == 'h')
				{
					write(1,"options: abcdefghijklmnopqrstuvwxyz\n",36);
					return 0;
				}

				t['z' - av[i][j] + 6] = 1;
				j++;
			}

			if (av[i][j])
			{
				write(1,"Invalid Option\n",15);
				return 0;
			}
			j++;
		}
		i++;
	}
	i = 0;
		while (i < 32)
		{
		t[i] = '0' + t[i];
		write(1,&t[i++],1);
			if(i == 32)
				write(1,"\n",1);
			else if(i % 8 == 0)
				write(1," ",1);

		}

	return 0;
}


/*
EXERCISE #5

Assignment name  : biggest_pal
Expected files   : *.c, *.h
Allowed functions: write
--------------------------------------------------------------------------------

Write a program named biggest_pal that takes a string as argument and prints the
biggest palindrome included inside this string, followed by a newline.

This string contains only lowercase characters.

If there is two palindromes of the same length, you have to print the last one.

If there is more or less than 1 argument, your program must print only a newline
only.

Exemples:

$> biggest_pal "abcba"
abcba
$> biggest_pal "aaaaaaaaaabbcbbaaaa"
aaaabbcbbaaaa
$> biggest_pal "aooibdaoiwhoihwdoinzeldaisaboyobasiadlezfdsfnslk"
zeldaisaboyobasiadlez
$> biggest_pal "aeibaabaammaabaalek"
aabaammaabaa
$> biggest_pal abeb qpinqwjobo qkmnwoiq

$> biggest_pal

$>
*/

// NO SOLUTION FOR THIS EXERCISE


/*
EXERCISE #6

Assignment name  : cycle_detector
Expected files   : cycle_detector.c
Allowed functions: malloc, free
--------------------------------------------------------------------------------

Create a function named cycle_detector that takes a const t_list *list
as argument, and check if the given linked list contains no cycles.

A cycle is defined when you go at least twice through the same link, when you
travel inside a linked list.

This function should returnw 1 if it detects a cycle inside the given linked
list, otherwise it returns 0.

This function should be prototyped like this:

    int        cycle_detector(const t_list *list)

The type t_list is:

    typedef struct     s_list
    {
        int            data;
        struct s_list  *next;
    }                  t_list;

This type will be included in a header named "list.h". You don't have to turn-in
your "list.h", we will use ours during the evaluation.
*/

/*
Create your own library.

#ifndef LIST_H
# define LIST_H

typedef struct     s_list
{
    int            data;
    struct s_list  *next;
}                  t_list;

#endif
*/

#include "list.h"

int        cycle_detector(const t_list *list)
{
	const t_list	*slow;
	const t_list	*fast;

	slow = list;
	fast = list;
	if (!list)
		return (0);
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			return (1);
	}
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	t_list *node1;
// 	t_list *node2;
// 	t_list *node3;
// 	t_list *node4;

// 	node1 = malloc(sizeof(t_list));
// 	node2 = malloc(sizeof(t_list));
// 	node3 = malloc(sizeof(t_list));
// 	node4 = malloc(sizeof(t_list));

// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = node2;

// 	printf("%d\n", cycle_detector(node1));
// }