all:
	gcc --static -o cat src/cat.c
	gcc --static -o ls src/ls.c
	gcc --static -o pwd src/pwd.c
	gcc --static -o tty src/tty.c
	gcc --static -o whoami src/whoami.c
clean:
	rm cat
	rm ls
	rm pwd
	rm tty
	rm whoami
