CC ?= gcc
CFLAGS ?= -Wall -Werror -g
TARGET ?= roll
SRC ?= roll.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET) *.o

run:
	$(MAKE) $(TARGET)
	./$(TARGET) 12

test: $(TARGET)
	./$(TARGET) 12

