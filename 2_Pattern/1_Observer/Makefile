CC=gcc
CFLAGS=-g -Wall
OBJS=observer_temperature.o app.o
TARGET=app.out

all: $(TARGET)

clean:
	rm -f *.o
	rm -f $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)