## Configuration

HEAD = printf "%-10s %s\n"


## Sources

AOC_LIB_PATH = ../../lib
AOC_LIB_SOURCES = $(shell find $(AOC_LIB_PATH) -name '*.c')
AOC_LIB_OBJECTS = $(AOC_LIB_SOURCES:%.c=%.o)

CC = gcc
BINARY = solver
SOURCES = solver.c
OBJECTS = $(SOURCES:%.c=%.o)


## Rules

all: $(BINARY)

# TODO
$(BINARY): $(AOC_LIB_OBJECTS) $(OBJECTS)
	@$(HEAD) "Generating" "$@"
	@$(CC) -I "$(AOC_LIB_PATH)" -o $@ $^

# TODO
.PHONY: run
run: $(BINARY)
	@./$(BINARY)

.PHONY: clean
clean:
	@$(HEAD) "Cleaning..."
	@rm -f $(BINARY)
	@rm -f $(OBJECTS)
	@rm -f $(AOC_LIB_OBJECTS)


## Generic rules

%.o: %.c
	@$(HEAD) "Compiling" "$@"
	@$(CC) -I "$(AOC_LIB_PATH)" -c -o "$@" "$<"
