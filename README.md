# Libft-42sp

This is the entry project at [École 42](https://www.youtube.com/watch?v=GDHhpy9ANpk&ab_channel=42TheNetwork), in which students are challenged to recreate a set of functions from the classic standardized libC library and other supplementary functions. These functions will then be used throughout the course of the school's curriculum, instead of the standard ones.

The bonus part of this project comprises functions for the manipulation of singly linked lists.

This project is also the first contact we have with `make` and `Makefile`, and the deliverable is the static library file `libft.a`.

## Functions
The functions written for libft can be clustered in 6 groups:

| Cluster | Functions |
|---|---|
| memory allocation and manipulation | `ft_strlen`, `ft_memcpy`, `ft_memset`, `ft_bzero`, `ft_memmove`, `ft_memcmp`, `ft_memchr`, `ft_calloc`, `ft_strdup`, `ft_substr`, `ft_strjoin` |
| ASCII symbols validation and transformatino | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| string manipulation | `ft_strlcat`, `ft_strlcpy`, `ft_atoi`, `ft_strnstr`, `ft_strncmp`, `ft_strchr`, `ft_strrchr`, `ft_strtrim`, `ft_split`, `ft_itoa` |
| printing functions | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |
| iterative functions | `ft_strmapi`, `ft_striteri` |
| linked lists manipulation (**:star: bonus**) | `ft_lstnew`, `ft_lstdelone`, `ft_lstclear`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstiter`, `ft_lstmap` |

All prototypes can be found in `libft.h`. See each function file for documentation notes.

# Use Libft in your project
In order to use this static library in your project, you must download this repository into your pc, compile `libft.a`, then include the header `libft.h` to your source code, and add the compilation flags `-L ./path/to/Libft-42sp -lft`.

``` shell
$> git clone https://github.com/rodsmade/Libft-42sp.git
$> cd Libft-42sp
$> make
```


Example program (`hello_libft.c`):

``` c
#include "Libft-42sp/libft.h

int	main()
{
	ft_putstr_fd("Hello world!", 1);
	ft_putstr_fd("Powered by Libft.", 1);
	return (0);
}

```

Compilation command:
``` make
$> gcc hello_libft.c -o hello_libft -L ./Libft-42sp -lft
```

Expected Output:
``` shell
$> ./hello_libft
Hello world!
Powered by Libft.
$>
```