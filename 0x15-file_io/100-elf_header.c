#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int fd, ret;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Failed to open file '%s'\n", argv[1]);
		return (98);
	}
	ret = read(fd, &header, sizeof(header));
	if (ret != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Failed to read ELF header\n");
		close(fd);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 || header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: File '%s' is not an ELF file\n", argv[1]);
		close(fd);
		return (98);
	}
	display_elf_header(&header);

	close(fd);
	return (EXIT_SUCCESS);
}

/**
 * display_elf_header - Display ELF header information
 * @header: Pointer to the ELF header
 */
void display_elf_header(const Elf64_Ehdr *header)
{
	print_magic(header->e_ident);
	print_class(header->e_ident[EI_CLASS]);
	print_data(header->e_ident[EI_DATA]);
	print_version(header->e_ident[EI_VERSION]);
	print_osabi(header->e_ident[EI_OSABI]);
	print_abi_version(header->e_ident[EI_ABIVERSION]);
	print_type(header->e_type);
	print_entry_point(header->e_entry);
}

void print_magic(const unsigned char *ident)
{
    	printf("Magic: %02x %02x %02x %02x\n", ident[0], ident[1], ident[2], ident[3]);
}
void print_class(unsigned char class)
{
    	printf("Class: %u-bit\n", class == ELFCLASS32 ? 32 : 64);
}
void print_data(unsigned char data)
{
    	printf("Data: %s\n", data == ELFDATA2LSB ? "Little Endian" : "Big Endian");
}
void print_version(unsigned char version) 
{
    	printf("Version: %u\n", version);
}
void print_osabi(unsigned char osabi)
{
    	printf("OS/ABI: %u\n", osabi);
}
void print_abi_version(unsigned char abi_version)
{
    	printf("ABI Version: %u\n", abi_version);
}
void print_type(unsigned int type)
{
    	printf("Type: %u\n", type);
}
void print_entry_point(Elf64_Addr entry_point)
{
    	printf("Entry Point: 0x%lx\n", entry_point);
}
