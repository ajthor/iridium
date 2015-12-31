BUILD_DIR = build
SOURCE_DIR = src

# Compiler
CC = g++

# Flags
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#  LIBNAME=-lSDL2 -lGLEW -framework OpenGL link OpenGL
CFLAGS = -g -c -Wall

# Include Path
#  -I/usr/local/include includes libraries in local folder
INCLUDES = -I/usr/local/include

# Library Directory
LIBDIR = -L/usr/local/lib
LIBNAME = -lGLEW -lGLFW3 -framework OpenGL

# The build target executable.
TARGET = $(BUILD_DIR)/lodestone

# The entry point into the program.
MAIN = main

all: $(TARGET)
	$(CC) $(LIBDIR) $(LIBNAME) -o $(TARGET) $(BUILD_DIR)/$(MAIN).o

$(TARGET): $(SOURCE_DIR)/$(MAIN).cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $(BUILD_DIR)/$(MAIN).o $(SOURCE_DIR)/$(MAIN).cpp

test:
	./$(TARGET)

clean:
	rm $(TARGET)
