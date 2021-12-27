CC:= gcc
EXC:=  out.exe

# SRC:= *.c
SRC:= main.c 
# SRC+= msg.c



all : clean build run

build: 
	@echo "building... "
	@${CC} ${SRC} -o ${EXC}

run:
	@echo "running... "
	@${EXC}

clean:
	@echo "cleaning... "
	@rm -rf *.o *.exe
