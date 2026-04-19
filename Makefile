CXX := g++

SRC_DIR := src
BIN_DIR := bin
TARGET := app

SRCS := $(shell find $(SRC_DIR) -name '*.cpp' -o -name '*.cpp')

OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BIN_DIR)/%.o,$(SRCS))

CXXFLAGS := -Wall -Wextra -ggdb
#CXXFLAGS += -Dverbose

INCLUDES := -I$(SRC_DIR) 

LIB := -lantlr4-runtime

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET) $(LIB)

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

recomp: clean $(TARGET)

clean:
	rm -rf $(BIN_DIR)

run: all
	./$(TARGET)

.PHONY: all clean

