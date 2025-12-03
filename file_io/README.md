# C - File I/O

This project focuses on using low-level file operations in C through POSIX system calls. The goal is to understand how files are opened, read, written to, and closed using system calls instead of standard library functions.

## Resources

- File descriptors
- How to Use the I/O System Calls Open, Close, Read and Write
- C Programming in Linux Tutorial - open() read() write() Functions

Man pages:
- open
- close
- read
- write
- dprintf

## Learning Objectives

By the end of this project, you should know:
- What file descriptors are
- The three standard file descriptors and their POSIX names
- How to create, open, close, read, and write files
- How to use the system calls open, close, read, write
- How to use the flags O_RDONLY, O_WRONLY, O_RDWR
- How file permissions work when creating a file
- What a system call is
- The difference between a function and a system call

## Requirements

- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS with:
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
- No global variables
- No more than 5 functions per file
- Allowed functions: malloc, free, exit
- Allowed syscalls: open, read, write, close
- Betty coding style required
- All header files should be include-guarded
- A README.md file is mandatory

## Files

| File | Description |
|------|-------------|
| 0-read_textfile.c | Reads a text file and prints it to POSIX standard output |
| 1-create_file.c | Creates a file |
| 2-append_text_to_file.c | Appends text at the end of a file |
| 3-cp.c | Copies the content of a file to another file |
| main.h | Header file with prototypes |


## Compilation Example

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-read_textfile.c -o readfile

