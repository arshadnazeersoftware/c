LIBS = $(wildcard lib/*)
INCLUDE_PATH = headers
cli_exec: libraries
	gcc main/allinone.c $(wildcard libraries/*) -o cli_exec


libraries:
	mkdir libobjects/
	for dir in $(LIBS); do \
	cd $$dir; \
	gcc -c *.c -I../; \
	mv *.o ../../libobjects; \
	cd -; \
	done
	
clean:
	rm -rf libobjects cli_exec
