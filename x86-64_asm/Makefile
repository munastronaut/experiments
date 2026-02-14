AS = nasm
AS_FLAGS = -f elf64
LD = ld

SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

SRCS = $(shell find $(SRC_DIR) -name "*.asm")

BINS = $(patsubst $(SRC_DIR)/%.asm, $(BIN_DIR)/%, $(SRCS))

.PRECIOUS: $(OBJ_DIR)/%.o

all: $(BINS)

$(BIN_DIR)/%: $(OBJ_DIR)/%.o
	@mkdir -p $(dir $@)
	$(LD) $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.asm
	@mkdir -p $(dir $@)
	$(AS) $(AS_FLAGS) $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
