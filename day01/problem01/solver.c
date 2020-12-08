
#include <stdio.h>
#include <stdlib.h>

#include "aoc_file.h"

int compute(char const *line) {
    int floor;

    floor = 0;
    while (*line)
    {
        if (*line == '(')
        {
            ++floor;
        }
        else if (*line == ')')
        {
            --floor;
        }

        ++line;
    }

    return floor;
}

int main(int argc, char **argv) {
    int floor;
    char *line;

    line = get_first_line("input.txt");
    if (line == NULL)
    {
        fprintf(stderr, "The file needs at least one line.\n");
        abort();
    }

    floor = compute(line);

    free(line);

    printf("Result: %d\n", floor);
    return 0;
}
