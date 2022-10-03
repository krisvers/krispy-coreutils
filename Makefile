CC := gcc
BUILD_DIR := build
PREFIX := /usr

.PHONY: all build clean install proper cat echo

all: clean proper build

build: cat echo

cat:
	$(CC) cat.c -o $(BUILD_DIR)/cat

echo:
	$(CC) echo.c -o $(BUILD_DIR)/echo

clean:
	rm -rf $(BUILD_DIR)

install:
	cp $(BUILD_DIR)/* $(PREFIX)/bin/

proper:
	mkdir $(BUILD_DIR)
