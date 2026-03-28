CC := cc
CC_FLAGS := -O2 -std=c23
SRC := src
BIN := bin

SRCS := $(shell find $(SRC) -name "*.c")
SV_SRC := $(SRC)/strview/main.c $(SRC)/strview/strview.c

BINS := $(patsubst $(SRC)/%.c, $(BIN)/%, $(filter-out $(SV_SRC), $(SRCS)))
SV_BIN := $(BIN)/strview/strview

all: $(BINS) $(SV_BIN)

$(BIN)/%: $(SRC)/%.c
	mkdir -p $(dir $@)
	$(CC) $(CC_FLAGS) $< -o $@

$(SV_BIN): $(SV_SRC)
	mkdir -p $(dir $@)
	$(CC) $(CC_FLAGS) $(SV_SRC) -o $@

clean:
	rm -rf $(BIN)

.PHONY: all clean
