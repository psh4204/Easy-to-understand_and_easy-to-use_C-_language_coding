CC=gcc
CFLAGS=-g -Wall
OBJS=sort/selection_sort.o sort/quick_sort.o sort/insertion_sort.o sort/bubble_sort.o app.o
TARGET=app.out

all: $(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)