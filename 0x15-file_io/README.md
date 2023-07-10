1)Write a function that reads a text file and prints it to the POSIX standard output.
Prototype: ssize_t read_textfile(const char *filename, size_t letters);
2)Create a function that creates a file.
Prototype: int create_file(const char *filename, char *text_content);
where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
3) a function that appends text at the end of a file.
Prototype: int append_text_to_file(const char *filename, char *text_content);
4) a program that copies the content of a file to another file.
Usage: cp file_from file_to
5)a program that displays the information contained in the ELF header at the start of an ELF file.
Usage: elf_header elf_filename
