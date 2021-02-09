CC=g++
SRC := $(MNIST_ML_ROOT)/KNN/src
CFLAGS := -shared -std=c++11 -DEUCLID
INCLUDE_DIR := $(MNIST_ML_ROOT)/KNN/include/

all : main

main : $(SRC)/knn.cc
	$(CC) -fPIC $(CFLAGS) $(SRC)/knn.cc -o main -L$(MNIST_ML_ROOT)/txlib/ -I$(INCLUDE_DIR) -I$(MNIST_ML_ROOT)/include -ldata

clean:
	rm main
