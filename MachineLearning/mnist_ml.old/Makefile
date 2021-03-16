CC=g++
INCLUDE_DIR := $(MNIST_ML_ROOT)/include
SRC := $(MNIST_ML_ROOT)/src
CFLAGS := -shared -std=c++11 -g
LIB_DATA := libdata.so

all: $(LIB_DATA)

$(LIB_DATA) : libdir objdir txobj/data_handler.o txobj/data.o
	$(CC) $(CFLAGS) -o $(MNIST_ML_ROOT)/txlib/$(LIB_DATA) txobj/*.o
	rm -r $(MNIST_ML_ROOT)/txobj 

libdir :
	mkdir -p $(MNIST_ML_ROOT)/txlib

objdir :
	mkdir -p $(MNIST_ML_ROOT)/txobj 

txobj/data_handler.o : $(SRC)/data_handler.cc 
	$(CC) -fPIC $(CFLAGS) -o $(MNIST_ML_ROOT)/txobj/data_handler.o -I$(INCLUDE_DIR) -c $(SRC)/data_handler.cc

txobj/data.o : $(SRC)/data.cc 
	$(CC) -fPIC $(CFLAGS) -o $(MNIST_ML_ROOT)/txobj/data.o -I$(INCLUDE_DIR) -c $(SRC)/data.cc

clean:
	rm -r $(MNIST_ML_ROOT)/txlib 
	rm -r $(MNIST_ML_ROOT)/txobj
