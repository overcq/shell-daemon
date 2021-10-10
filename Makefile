.PHONY: all build install
all: build
build:
	$(CC) -s -O2 shell-daemon.c
install:
	gksu ' \
		install -C -o root -g root -m 755 a.out /usr/bin/d \
	'
