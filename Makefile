all:
	gcc -o cat src/cat.c
	gcc -o ls src/ls.c
clean:
	rm cat
	rm ls
test:
	echo "running tests for the cat command..."
	./cat tests/cat/1.txt
	echo "running tests for the ls command..."
	./ls
