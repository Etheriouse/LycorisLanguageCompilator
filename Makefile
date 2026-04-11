CXX := g++

SRC_DIR := src
BIN_DIR := bin
TARGET := app

SRCS := $(shell find $(SRC_DIR) -name '*.cc')

OBJS := $(patsubst $(SRC_DIR)/%.cc,$(BIN_DIR)/%.o,$(SRCS))

CXXFLAGS := -Wall -Wextra -ggdb
INCLUDES := -I$(SRC_DIR)

LIB := 

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET) $(LIB)

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cc
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(BIN_DIR)

run: all
	./$(TARGET)

.PHONY: all clean

