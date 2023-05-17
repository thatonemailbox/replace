#define _CRTDBG_MAP_ALLOC
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <crtdbg.h>

int checkNULL(FILE *file);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./replace file");
        exit(1);
    }

    FILE *output = fopen(argv[1], "w");

    for (int i = 1; i < 16; i++)
    {
        fprintf(output, "Bit(in=in[%d], load=load, out=out[%d]);\n", i, i);
    }

    fclose(output);
    _CrtDumpMemoryLeaks();
    return 0;
}
