# Libft 42School
Implementation of some of the Standard C Library functions including some additional ones.

### F.A.Q
* [What is libft?](#what-is-libft)
* [What's in it?](#whats-in-it)
* [How does it work?](#how-does-it-work)
* [Example usage](#example-usage)

### What is libft?
[Libft][1] is an individual project at [42][2] that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: *Reinventing the wheel is bad, [42][2] makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At [42][2] we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.*

### What's in it?

As you can see from the [Subject][1], there are 4 sections:

1.  **Libft Functions:** Some of the standard C functions
2.  **Additional functions:** Functions 42 deems will be useful for later projects
3.  **Bonus Functions:** Functions 42 deems will be useful for linked list manipulation
4.  **Personal Functions** 
5.  **Project Functions**:** Functions 42 Projects will be useful for later.


Libft functions | Additional functions | Bonus Functions | Personal Functions | Project Functions
:----------- | :-----------: | :-----------: | -----------: | -----------:
ft_memset		| ft_memalloc	| ft_lstnew		| ft_memicmp | get_next_line
ft_bzero		| ft_memdel		| ft_lstdelone	| ft_memswp
ft_memcpy		| ft_strnew		| ft_lstdel		| ft_strlswp
ft_memccpy		| ft_strdel		| ft_lstadd		| ft_strnswp
ft_memmove		| ft_strclr		| ft_lstiter	| ft_strswp
ft_memchr		| ft_striter	| ft_lstmap		| ft_read
ft_memcmp		| ft_striteri	|				| 
ft_strlen		| ft_strmap		|				| 
ft_strdup		| ft_strmapi	|				| 
ft_strcpy		| ft_strequ		|				| 
ft_strncpy		| ft_strnequ	|			| 
ft_strcat		| ft_strsub		| |
ft_strlcat		| ft_strjoin	| | 
ft_strchr		| ft_strtrim	| | 
ft_strrchr		| ft_strsplit	| | 
ft_strstr		| ft_itoa		| | 
ft_strnstr		| ft_putchar	| | 
ft_strcmp		| ft_putstr		| | 
ft_strncmp		| ft_putendl	| | 
ft_atoi		| ft_putnbr		| | 
ft_isalpha		| ft_putchar_fd	| | 
ft_isdigit		| ft_putstr_fd	| | 
ft_isalnum		| ft_putendl_fd	| | 
ft_isascii		| ft_putnbr_fd	| | 
ft_isprint		|| | 
ft_toupper		| | | 
ft_tolower		| | | 


Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for [42][2] School.

My code is not the best, but it passed all the 42 tests successfully.

### How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at [42][2].

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

	git clone https://github.com/LYushan/libft
	cd libft
	make


Now to clean up (removing the .o files and the .c files from the root), call `make clean`


## Usage

This is a list of my projects that use Libft extensively:

* [get_next_line](https://github.com/dom0ng/get_next_line) *Private repo
* [FDF](https://github.com/dom0ng/FDF) *Private repo
* [ft_printf](https://github.com/dom0ng/ft_printf) *Private repo

## Enjoy.


https://github.com/jgigault/42FileChecker
* 42FileChecker is a tiny bash script developed at 42 school for testing and checking the files according to the rules of the subjects.

[1]: https://github.com/LYushan/libft/blob/master/libft.fr.pdf "Libft PDF"
[2]: http://www.42.fr/ "42 PARIS"
