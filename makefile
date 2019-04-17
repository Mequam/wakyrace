build: RaceTest.cc Race.h Rng.h
	g++ RaceTest.cc -o wakyrace
install: wakyrace
	mv wakyrace /usr/bin
uninstall: /usr/bin/wakyrace
	rm /usr/bin/wakyrace
