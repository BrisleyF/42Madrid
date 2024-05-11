#include "get_next_line.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main (int argc, char **argv)
{
    int fd;
    char *line;
    //int n_bytes;
    //char result[BUFFER_SIZE + 1];

    if (argc != 2) {
        printf("Uso: %s <nombre_archivo>\n", argv[0]);
        return 1;
    }

    fd = open (argv[1], O_RDONLY);
    if (fd == -1)
        return (printf("fallo"), 1);
    
    while ((line = get_next_line(fd)) != NULL) {
		printf("%s", line);
		free(line); 
	}
    printf("\n");
	// Close the file descriptor
	close(fd);

    /*n_bytes = read(fd, result, BUFFER_SIZE);

    printf("Valor de buffer size %d\n", BUFFER_SIZE);
    printf("Cantidad de bytes leidos %d\n", n_bytes);
    printf("bufffer leido: [%s]\n", result);*/

    return (0);
}