#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>

#include "aoc_file.h"

char *get_first_line(const char *filename) {
    FILE *fp;
    char *line;
    size_t length;

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        return NULL;
    }

    line = NULL;
    length = 0;
    if (getline(&line, &length, fp) == -1)
    {
        fclose(fp);
        return NULL;
    }

    fclose(fp);
    return line;
}
