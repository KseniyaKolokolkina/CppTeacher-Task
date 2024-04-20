SRC_DIR=./src
CPP_FILES+=$(SRC_DIR)/MyTask.cpp
BUILD_DIR=./build
CXX_FLAGS+=

all: output

output: build

build: FORCE
	mkdir -p $(BUILD_DIR)
	gcc $(CXX_FLAGS) $(CPP_FILES) -c -o $(BUILD_DIR)/generatedTask.so

clean: FORCE
	rm -r -d -f $(BUILD_DIR)/*

FORCE: 
