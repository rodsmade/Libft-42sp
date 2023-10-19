# Libft-42sp

This is the entry project at [École 42](https://www.youtube.com/watch?v=GDHhpy9ANpk&ab_channel=42TheNetwork), in which students are challenged to recreate a set of functions from the classic standardised libC, and other supplementary functions. These functions will then be used throughout the school's curriculum, instead of the standard ones. Students are also welcome to incorporate their own functinos to their libft as needs arrise for the course of the curriculum.

The bonus part of this project comprises functions for the manipulation of singly linked lists.

This project is also the first contact we have with `make` and `Makefile`, and besides the source code for each function and a Makefile, another deliverable is the static library file `libft.a`.

## Functions
The functions written for `libft` can be clustered in 6 groups:

| Cluster | Functions |
|---|---|
| ASCII symbols validation and transformation | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, :new: `ft_is_blankspace`, :new: `ft_isnumeric_str.c` |
| printing functions | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |
| memory allocation and manipulation | `ft_memcpy`, `ft_memset`, `ft_bzero`, `ft_memmove`, `ft_memcmp`, `ft_memchr`, `ft_calloc`, `ft_strdup`, `ft_substr`, `ft_strjoin`, :new: `ft_free_arr`, :new: `ft_free_ptr` |
| string manipulation | `ft_strlen`, `ft_strlcat`, `ft_strlcpy`, `ft_atoi`, `ft_strnstr`, `ft_strncmp`, `ft_strchr`, `ft_strrchr`, `ft_strtrim`, `ft_split`, `ft_itoa`, :new: `ft_append_char`, :new: `ft_atoli`, :new: `ft_uitoa`, :new: `ft_uitohex`, :new: `ft_ulitohex` |
| iterative functions | `ft_strmapi`, :new: `ft_striteri` |
| :star: linked lists manipulation | `ft_lstnew`, `ft_lstdelone`, `ft_lstclear`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstiter`, `ft_lstmap`, :new: `ft_lst_remove_node` |

*note: :star: represents bonus functions; :new: represents extra functions added afterwards based on personal needs, not part of the original project submission.*

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

## Final note
As I studied for this project (and even further on as I progressed in the programme and better understood the basal concepts introduced here), I wrote this sort of guide/commentary on the project, and have since been sharing it with other fellow students of 42 in the hopes of presenting the delimitation of the subjects covered in this project (for it is known to be overwhelming at first, I've been there!), and also pointing a more clear and well-defined direction where to begin when starting off on this project. If need be, please check it out. It's written in Portuguese :cactus:

[Acelera - Libft](https://www.notion.so/rodsmade/Acelera-Libft-8874a01f188a4671ae503fe9e99056ab)
