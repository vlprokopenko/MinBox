all:
	gcc -o cat src/cat.c
	gcc -o ls src/ls.c
	gcc -o pwd src/pwd.c
clean:
	rm cat
	rm ls
	rm pwd
test:
	echo "running tests for the cat command..."
	./cat tests/cat/1.txt
	echo "running tests for the ls command..."
	./ls
	echo "running tests for pwd"
	./pwd
