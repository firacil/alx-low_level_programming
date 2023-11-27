# Project Name
**0x15. C - File I/O**

## Author's Details
Name: *Firaol Mk.*

Email: *firaolmekbib511@gmail.com*

Tel: *+251925346593.*

##  Requirements
*   Allowed editors: `vi`, `vim`, `emacs`.
*   All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
*   Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`.
*   All your files should end with a new line.
*   You are not allowed to use global variables.
*   No more than 5 functions per file.
*   The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden unless stated othewise.
*   Allowed syscalls: `read`, `write`, `open`, `close`.
*   You are allowed to use `_putchar`.
*   The `main.c` files are used to test your functions, but you don’t have to push them to your repo.
*   The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`.
*   All your header files should be include guarded.
*   Tip: always prefer using symbolic constants (`POSIX`) vs numbers when it makes sense. For instance `read(STDIN_FILENO, ...` vs `read(0, ...`.


## Project Description
Learn about how to create, open, close, read and write files.
What are file descriptors.
What are the 3 standard file descriptors, what are their purpose and what are their `POSIX` names.
How to use the I/O system calls `pen`, `close`, `read` and `write`.
What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`.
What are file permissions, and how to set them when creating a file with the `open` system call.
What is a system call.
What is the difference between a function and a system call.


* **0. 0** - Write a function that reads a text file and prints it to the POSIX standard output. - `0-read_textfile.c`.
* **1. 1** - Create a function that creates a file. - `1-create_file.c`.
* **2. 10** - Write a function that appends text at the end of a file. - `2-append_text_to_file.c`.
* **3. 11** - Write a program that copies the content of a file to another file. - `3-cp.c`.
* **4. 100** - Write a program that displays the information contained in the ELF header at the start of an ELF file. - `100-elf_header.c`.


## Collaborate

To collaborate, reach me through my email address firaolmekbib511@gmail.com.
