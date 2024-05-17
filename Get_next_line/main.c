#include "get_next_line.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main (int argc, char **argv)
{
    int fd;
    char *line;
    int repit;
    int i;
    if (argc != 3) {
        printf("Uso: %s <nombre_archivo> <repeticiones>\n", argv[0]);
        return 1;
    }
    fd = open (argv[1], O_RDONLY);
    if (fd == -1)
        return (printf("fallo"), 1);
    repit = atoi(argv[2]);
    printf("Repit: %d\n",repit);
    i = 0;
    while(i < repit)
    {
        line = get_next_line(fd);
        printf("main: %s", line);
        i++;
        free(line); 
    }

    // Close the file descriptor
    close(fd);
    return (0);
}
