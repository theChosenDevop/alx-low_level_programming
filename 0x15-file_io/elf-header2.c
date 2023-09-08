#include "elfheader.h"

/**
 * print_entry_point_address - Prints the entry point of an Elf header
 * @e_entry: The address of the Elf entry point
 * @e_indent: A pointer to an array of Elf header
 * Return: void
 */
void print_entry_point_address(unsigned long int e_entry,
		unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8)
				& 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}

/**
 * close_elf - Close an Elf file
 * @elf: The file descriptor of the Elf file
 * Return: void
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
