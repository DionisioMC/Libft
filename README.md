*This project has been created as part of the 42 curriculum by dcoelho*

# Libft

## Description

**Libft** is a foundational project in the 42 curriculum focused on recreating essential functions from the C standard library (libc), along with additional utility functions and linked list operations.

The objective is to build a personal C library from scratch to gain a deeper understanding of memory management, string manipulation, and data structures.

The final output is a static library (`libft.a`) that can be reused in future projects.

## Library Description

The **Libft** library is organised into three main components:

### 1. Libc Functions

These functions replicate the behaviour of standard libc functions, following their original specifications:


- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- String functions: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- Memory functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- Conversion: `ft_atoi`
- Case conversion: `ft_toupper`, `ft_tolower`
- Allocation: `ft_calloc`, `ft_strdup`

### 2. Additional Utility Functions

This section contains functions not present in libc:

- `ft_substr` – extract substring
- `ft_strjoin` – concatenate strings
- `ft_strtrim` – trim characters
- `ft_split` – split string into array
- `ft_itoa` – convert int to string
- `ft_strmapi` – apply function to string
- `ft_striteri` – iterate over string
- File descriptor output:
  - `ft_putchar_fd`
  - `ft_putstr_fd`
  - `ft_putendl_fd`
  - `ft_putnbr_fd`

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