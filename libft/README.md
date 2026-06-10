*This project has been created as part of the 42 curriculum by willpere*

# Description

Libft is a custom C library developed as part of the 42 curriculum.  
It consists of reimplementing essential functions from the standard C library (`libc`), along with additional utility functions.

The main goal of this project is to develop a deeper understanding of low-level programming concepts such as memory management, pointers, and string manipulation.  
It also provides a reusable foundation for future C projects.


# Instructions

### Clone the repository:

```bash
git clone <your-repository-url>
cd libft
```

### Compile the library:
```bash
make
```

### This will generate the static library file:
```bash
libft.a
```

### Available commands:

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and libft.a
make re     # Recompile everything
```

### Usage:

```bash
#include "libft.h"
```

### Compile the program linking the library:

```bash
cc main.c libft.a -o program
./program
```



# Resources

- Manual pages (`man strlen`, `man malloc`, etc.)
- Websites such as W3Schools and GeeksforGeeks
- 42 intra subject and peers

AI tools were used to:

- Clarify concepts 
- Understand expected behavior of standard functions  
- Review logic and identify potential improvements  

# Library Description

The library includes the following groups of functions:

### Character functions
Functions used to check and classify characters, such as determining if a character is alphabetic, numeric, printable, or part of the ASCII set.

- ft_isalpha
- ft_isdigit
- ft_isalnum
- ft_isascii
- ft_isprint

### String functions
Functions for handling and manipulating strings, including measuring length, searching, copying, concatenating, and transforming strings.

- ft_strlen
- ft_strchr
- ft_strrchr
- ft_strncmp
- ft_strnstr
- ft_strdup
- ft_strlcpy
- ft_strlcat
- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_strmapi
- ft_striteri

### Memory functions
Functions for low-level memory manipulation, including setting, copying, moving, and comparing memory blocks.

- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc

### Conversion functions
Functions used to convert between different data types, such as strings and integers.

- ft_atoi
- ft_itoa

### File descriptor output
Functions used to output data to file descriptors, allowing writing to standard output, files, or other streams.

- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Linked list functions
Functions for creating and manipulating linked lists, including adding, removing, iterating, and mapping elements.

- ft_lstnew
- ft_lstadd_front
- ft_lstadd_back
- ft_lstsize
- ft_lstlast
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap
