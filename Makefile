CC := gcc
BUILD_DIR := build
PREFIX := /usr

.PHONY: all build clean install proper cat echo ls touch

all: clean proper build

build: cat echo ls touch

cat:
	$(CC) cat.c -o $(BUILD_DIR)/cat

echo:
	$(CC) echo.c -o $(BUILD_DIR)/echo

ls:
	$(CC) ls.c -o $(BUILD_DIR)/ls

touch:
	$(CC) touch.c -o $(BUILD_DIR)/touch

clean:
	rm -rf $(BUILD_DIR)

install:
	cp $(BUILD_DIR)/* $(PREFIX)/bin/

proper:
	mkdir $(BUILD_DIR)
