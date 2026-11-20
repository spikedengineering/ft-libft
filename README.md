_This project has been created as part of the 42 curriculum by ajose-al._

# Description
> Libft - Your very first own library

This project consists of a C library that includes numerous general purpose functions for my programs.

Working on each one of these functions was a very fun experience that not just allowed me to deeply understand C memory management and manipulation but confronted me with simple yet interesting exercises about string handling and linked lists. It was a very enriching experience that allowed me to generate more interest in the C Programming Language and how it really behaves.

While working on the linked lists part of this project, I also created a visualizer for them. It can be found commented out on `ft_strmap.c` file because the project delivery requirements do not allow for additional files delivered inside the project's repository.

Unfortunately, the 42 common core curriculum does not contain as many C projects anymore, but I plan to continue to use and maintain this library in the future so I continue my learning journey of writing everything from scratch, allowing me to harden my C programming capabilities and further understand each backbone implementation of the standard libraries.

# Instructions
### How to Compile the Library
```bash
make all
```
### Delete Object Files
```bash
make clean
```
### Delete Object Files and Executable Binary
```bash
make fclean
```
### Delete Object Files and Executable Binary and Recompile
```bash
make re
```
### Compile your Program with Libft after Building Libft
> with `libft.a` and `libft.h` files inside your working directory.
```c
#include "libft.h"
```
```bash
cc -Wall -Werror -Wextra your_program_file.c libft.a
```

# Resources
- https://www.man7.org/linux/man-pages/
- https://github.com/gcc-mirror/gcc/
- https://makefiletutorial.com/

## AI Usage
Although I'm not against AI; I do not directly use or recommend its usage for learning.

This project was indirectly aided by AI in the form of development tools creation by other people.
