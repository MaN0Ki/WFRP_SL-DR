
all: roll.c
	gcc -Wall -Werror -g -o roll roll.c 

clean:
	rm -f roll
