CC := gcc
BUILD_DIR := build
PREFIX := /usr

.PHONY: all build clean install proper cat echo

all: clean proper build

build: cat echo touch

cat:
	$(CC) cat.c -o $(BUILD_DIR)/cat

echo:
	$(CC) echo.c -o $(BUILD_DIR)/echo

touch:
	$(CC) touch.c -o $(BUILD_DIR)/touch

clean:
	rm -rf $(BUILD_DIR)

install:
	cp $(BUILD_DIR)/* $(PREFIX)/bin/

proper:
	mkdir $(BUILD_DIR)
