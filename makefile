all : clean build run


build: 
	@echo "building"
	@gcc main.c

run:
	@echo "running"
	@./a.exe

clean:
	@echo "cleaning"
	@rm -rf *.o *.exe
