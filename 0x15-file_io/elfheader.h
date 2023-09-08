#ifndef ELFHEADER_H
#define ELFHEADER_H


#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi_version(unsigned char *e_ident);
void print_os_abi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry_point_address(unsigned long int e_entry,
		unsigned char *e_ident);
void close_elf(int elf);

#endif
