CC = gcc
CFLAGS = -Wall -Wextra
OBJ_DIR = build
SRC_DIR = src
INC_DIR = include
BIN_DIR = bin
LIB_DIR = lib
TARGET = test
INC_FLAGS = -I./$(INC_DIR)

.PHONY : clean all

all : $(BIN_DIR)/$(TARGET)

$(BIN_DIR)/$(TARGET) : $(OBJ_DIR)/test.o $(OBJ_DIR)/textUtils.o
	@$(CC) $(CFLAGS) $(INC_FLAGS) $(OBJ_DIR)/test.o $(OBJ_DIR)/textUtils.o -o $(BIN_DIR)/$(TARGET)

$(OBJ_DIR)/test.o : $(SRC_DIR)/test.c $(INC_DIR)/textUtils.h
	@$(CC) $(CFLAGS) $(INC_FLAGS) -c $(SRC_DIR)/test.c -o $(OBJ_DIR)/test.o
  
$(OBJ_DIR)/textUtils.o : $(SRC_DIR)/textUtils.c $(INC_DIR)/textUtils.h
	@$(CC) $(CFLAGS) $(INC_FLAGS) -c $(SRC_DIR)/textUtils.c -o $(OBJ_DIR)/textUtils.o

  
clean:
	rm -rf $(BIN_DIR)/$(TARGET) $(OBJ_DIR)/*.o $(LIB_DIR)/*.a export
