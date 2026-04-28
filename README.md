*This project has been created as part of the 42 curriculum by dcoelho*

# Libft

## Description

Libft is a static C library that reimplements a set of fundamental functions from the standard C library (libc), along with additional utility functions and basic data structures.

The main objective of this project is to develop a deep understanding of:

* memory manipulation
* string handling
* dynamic memory allocation
* data structures

This library is designed to be reused throughout the 42 curriculum, serving as a foundation for future C projects.

## Library Description

The **Libft** library is organised into three main components:

### 1.Reimplementation of Libc Functions

These functions replicate the behaviour of standard libc functions, following their original specifications:

* **Character classification**  
  Functions used to confirm character properties such as alphabetic, numeric, ASCII, or printable characters.

* **Memory manipulation**  
  Functions such as `memset`, `bzero`, `memcpy`, and `memmove` provide direct control over raw memory blocks.

* **String manipulation**  
  Functions like `strlen`, `strchr`, `strrchr`, `strncmp`, `strlcpy`, `strlcat`, and `strnstr` allow efficient handling of C strings.

* **Type conversion**  
  `atoi` converts a numeric string into an integer value.

* **Dynamic allocation**  
  `calloc` and `strdup` allocate and duplicate memory safely.

All of these functions  were implemented independently in order to better understand their internal logic and behaviours.

### 2. Additional Utility Functions

This section contains functions not present in libc:

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

These functions provide advanced string processing, integer conversion, functional iteration, and controlled output to file descriptors.

### 3. Data Structures — Linked Lists

The library also includes an implementation of linked lists using the following struct:

    typedef struct s_list
    {
    	void			*content;
    	struct s_list	*next;
    }	t_list;

Implemented linked list operations:

* `ft_lstnew`
* `ft_lstadd_front`
* `ft_lstsize`
* `ft_lstlast`
* `ft_lstadd_back`
* `ft_lstdelone`
* `ft_lstclear`
* `ft_lstiter`
* `ft_lstmap`

These functions allow dynamic storage, traversal, deletion, and transformation of generic data.

## Instructions

### Compilation

    make

This command generates:

    libft.a

### Makefile Rules

* `make` or `make all` → compile the library
* `make clean` → remove object files
* `make fclean` → remove object files and library
* `make re` → remove object files and library and rebuilds everything

### Usage

Include the header file:

    #include "libft.h"

Compile your project with:

    cc main.c -L. -lft

## Resources

### References

The following references were used throughout the development of this project:

* Linux manual pages (`man`)
* *The C Programming Language* — Brian W. Kernighan and Dennis M. Ritchie
* GNU C Library Documentation
* BSD libc Documentation
* Official 42 Libft Subject

These references were consulted to ensure that each function respected the expected prototype, return values, and edge-case behaviour.

### Development and Debugging Resources

Additional resources used during implementation and testing:

* custom written test cases
* peer discussions and peer evaluations
* manual debugging with `gdb`
* memory analysis with `valgrind`

### AI Usage

Artificial Intelligence was used exclusively as a supplementary learning and verification tool.

Its usage was limited to:

* clarifying C concepts
* validating understanding of edge cases
* reviewing behaviour of standard functions

AI was not used to blindly generate final solutions, and every function included in this library was manually written, tested, debugged, and fully understood before submission.

## Conclusion

Libft establishes the essential foundations of C programming by focusing on memory handling, string processing, dynamic allocation, and basic data structures.

Beyond being a reusable static library, it represents a fundamental step towards writing safer, cleaner, and more efficient C code throughout the 42 curriculum.