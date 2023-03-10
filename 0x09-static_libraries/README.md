0x09-static_libraries
All the files within this Folder are made executable
Remember  In creating a static library
gcc -c *.c > This converts .c files to .o (object) files

ar rcs libmy.a *.o

ar rc libmy.a *.o > This creates the static library "Libmy.a"

ar -t libmy.a > This lists all files in libmy.a

ranlib libmy.a > This converts to random library

After creating a static library and you would want to compile for testing use:
gcc -std=gnu89 main.c -L -lmy -o(new_file_name)
