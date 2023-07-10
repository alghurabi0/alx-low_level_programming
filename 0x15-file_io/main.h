#ifndef MY_HEADER
#define MY_HEADER

#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>
#include <elf.h>

int main(int argc, char *argv[]);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error_and_exit(const char *message);
void display_elf_header(const Elf64_Ehdr *header);
void print_magic(const unsigned char *ident);
void print_class(unsigned char class);
void print_data(unsigned char data);
void print_version(unsigned char version);
void print_osabi(unsigned char osabi);
void print_abi_version(unsigned char abi_version);
void print_type(unsigned int type);
void print_entry_point(Elf64_Addr entry_point);
#endif

