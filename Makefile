DIRS := $(wildcard */Makefile)
DIRS := $(patsubst %/Makefile,%,$(DIRS))

FLAGS := --no-print-directory -C

.PHONY: all clean $(DIRS)

all: $(DIRS)

$(DIRS):
	$(MAKE) $(FLAGS) $@

clean:
	for dir in $(DIRS); do \
		$(MAKE) $(FLAGS) $$dir clean; \
	done
