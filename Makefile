all:
	gcc --static -o build/cat src/cat.c
	gcc --static -o build/ls src/ls.c
	gcc --static -o build/pwd src/pwd.c
	gcc --static -o build/tty src/tty.c
	gcc --static -o build/whoami src/whoami.c
	gcc --static -o build/true src/true.c
	gcc --static -o build/false src/false.c
	gcc --static -o build/echo src/echo.c
	gcc --static -o build/mkdir src/mkdir.c
	gcc --static -o build/touch src/touch.c
	gcc --static -o build/rm src/rm.c
	gcc --static -o build/clear src/clear.c
clean:
	rm build/*
man:
	cp doc/man/* /usr/share/man/man1/
	mandb
