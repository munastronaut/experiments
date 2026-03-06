AS := nasm
AS_FLAGS := -f elf64
LD := ld

SRC := src
OBJ := obj
BIN := bin

SRCS := $(shell find $(SRC) -name "*.asm")

BINS := $(patsubst $(SRC)/%.asm, $(BIN)/%, $(SRCS))

.PRECIOUS: $(OBJ)/%.o

all: $(BINS)

$(BIN)/%: $(OBJ)/%.o
	mkdir -p $(dir $@)
	$(LD) $< -o $@

$(OBJ)/%.o: $(SRC)/%.asm
	mkdir -p $(dir $@)
	$(AS) $(AS_FLAGS) $< -o $@

clean:
	rm -rf $(OBJ) $(BIN)
