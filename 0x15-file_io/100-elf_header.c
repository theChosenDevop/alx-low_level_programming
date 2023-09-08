#include "elfheader.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: arument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, read_bytes;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s filename \n", argv[0]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		free(header);
		dprintf(STDERR_FILENO, "Error: Can't open %s\n", argv[1]);
		exit(98);
	}
	read_bytes = read(fd, header, sizeof(Elf64_Ehdr));
	if (read_bytes == -1)
	{
		free(header);
		dprintf(STDERR_FILENO, "Error: Can't read %s\n", argv[1]);
		close_elf(fd);
	}
	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_os_abi(header->e_ident);
	print_abi_version(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry_point_address(header->e_entry, header->e_ident);

	free(header);
	close_elf(fd);
	return (0);
}

/**
 * check_elf - check if file is an Elf
 * @e_ident: pointer to array of ELF header
 * Return: void
 */
void check_elf(unsigned char *e_ident)
{
	int i = 0;

	while (i < 4)
	{
		if (
				e_ident[i] != 127
				&& e_ident[i] != 'E'
				&& e_ident[i] != 'L'
				&& e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF File\n");
			exit(98);
		}
		i++;
	}
}

/**
 * print_magic - print magic numbers
 * @e_ident: A pointer to an array containing the ELF values
 * Description: Magic numbers are seperated by spaces
 * Return: void
 */
void print_magic(unsigned char *e_ident)
{
	int index = 0;

	printf("  Magic:   ");

	while (index < EI_NIDENT)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
		index++;
	}
}

/**
 * print_class - print Elf Class
 * @e_ident: A pointer to an array
 * Return: void
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints data from array of Elf header
 * @e_ident: pointer to array containing class, data and others
 * Return: void
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - print the version from array of Elf Header
 * @e_ident: pointer to array of Elf header containing class,
 * data, version and others
 * Return: void
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * print_os_abi - prints OS/ABI from array of Elf Header
 * @e_ident: pointer to array of Elf header containing class,
 * data, version, os/abi and others
 * Return: void
 */
void print_os_abi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi_version - prints the abi version of Elf header
 * from an array stored in e_ident
 * @e_ident: pointer to an array of Elf header containing data,
 * class, version, os/abi, abi version and others
 * Return: void
 */
void print_abi_version(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the type of Elf heade
 * @e_ident: pointer to an array of ELf header
 * @e_type: Elf type
 * Return: void
 */
void print_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}

	printf("  Type:                              ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}
