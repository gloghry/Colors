# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra

# Directories
SRC_DIR = src
BIN_DIR = bin
EXE = color_test

# Targets and sources
TARGET = $(BIN_DIR)/$(EXE)
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BIN_DIR)/%.o)

# Default target
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files
$(BIN_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	

run: $(TARGET)
	@echo "Running '$(EXE)'..."
	@$(TARGET)

# Clean up build files
clean:
	rm -rf $(BIN_DIR)

# Phony targets
.PHONY: all clean run
