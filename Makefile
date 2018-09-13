generate: snake.c
	gcc snake.c -o Snake
	mv Snake build/

build:
	mkdir build

clean:
	rm -r build/*
