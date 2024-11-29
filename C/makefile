# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Directories
SRC_DIR = src
BIN_DIR = bin

# Executables for each reference file
COLOR_EXAMPLE = $(BIN_DIR)/color_example
RAINBOWS = $(BIN_DIR)/rainbows
COLOR_TEST = $(BIN_DIR)/color_test

# All source files
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Objects
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BIN_DIR)/%.o)

# Default target to build all executables
all: $(COLOR_EXAMPLE) $(RAINBOWS) $(COLOR_TEST)

# Compile and link each executable
$(COLOR_EXAMPLE): $(SRC_DIR)/color_example.c
	$(CC) $(CFLAGS) -o $@ $^

$(RAINBOWS): $(SRC_DIR)/rainbows.c
	$(CC) $(CFLAGS) -o $@ $^

$(COLOR_TEST): $(SRC_DIR)/color_test.c
	$(CC) $(CFLAGS) -o $@ $^

# Compile all .c files to .o objects
$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -rf $(BIN_DIR)

# Run commands for each executable
run_example: $(COLOR_EXAMPLE)
	@echo "It is recommended to view color_example.c source file."
	@echo "Running color_example..."
	@./$(COLOR_EXAMPLE)

run_rainbows: $(RAINBOWS)
	@echo "Running rainbows..."
	@./$(RAINBOWS)

run_test: $(COLOR_TEST)
	@echo "Running color_test..."
	@./$(COLOR_TEST)

run: $(COLOR_EXAMPLE) $(RAINBOWS) $(COLOR_TEST)
	@make run_example
	@make run_rainbows
	@make run_test

# Phony targets
.PHONY: all clean run_example run_rainbows run_test run