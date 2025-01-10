all:
	gcc --static -o cat src/cat.c
	gcc --static -o ls src/ls.c
	gcc --static -o pwd src/pwd.c
	gcc --static -o tty src/tty.c
	gcc --static -o whoami src/whoami.c
	gcc --static -o true src/true.c
	gcc --static -o false src/false.c
	gcc --static -o echo src/echo.c
	gcc --static -o mkdir src/mkdir.c
	gcc --static -o touch src/touch.c
	gcc --static -o rmdir src/rmdir.c
clean:
	rm cat
	rm ls
	rm pwd
	rm tty
	rm whoami
	rm true
	rm false
	rm echo
	rm mkdir
	rm touch
	rm rmdir
