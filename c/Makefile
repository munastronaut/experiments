CC := cc
CC_FLAGS := -O2 -std=c23
SRC := src
BIN := bin

SRCS := $(shell find $(SRC) -name "*.c")

BINS := $(patsubst $(SRC)/%.c, $(BIN)/%, $(SRCS))

all: $(BINS)

$(BIN)/%: $(SRC)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CC_FLAGS) $< -o $@

clean:
	rm -rf $(BIN)

.PHONY: all clean
