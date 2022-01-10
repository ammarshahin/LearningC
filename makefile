SHELL:= usr/bin/bash
CC:= gcc
EXC:= ./release.exe
EXC_DEBUG:= ./debug.exe

# optmization levels 0,1,2,3,s(size),g(Debugging), fast
# warrning levels -w, -Wall, -Werror
CFLAGS:= -O0
# CFLAGS+= --strip-all
# CFLAGS+= -Wall

# Debugging flags
C_DEBUG_FLAGS:= -g
C_DEBUG_FLAGS+= -Wall
C_DEBUG_FLAGS+= -Og
C_DEBUG_FLAGS+= -Xlinker -Map=output.map 

# SRC:= *.c
SRC:= src/main.c 
# SRC+= src/algorithms/binary_search/binary_search.c
# SRC+= src/algorithms/bubble_sort/bubble_sort.c


all : clean build run

build: 
	@echo "building... "
	@${CC} ${CFLAGS} ${SRC} -o ${EXC}

time:
	@echo "-------------- Time --------------"
	@time ${EXC} 

run:
	@echo "---------- running... ------------- "
	@${EXC}

debug:
	@echo "building... "
	@${CC} ${C_DEBUG_FLAGS} ${SRC} -o ${EXC_DEBUG}

size:
	@echo "-------------- Size --------------"
	@size ${EXC}

clean:
	@echo "cleaning... "
	@rm -rf *.o *.exe *.map

git: 
	@echo "Saving..."
	@git add .
	@git cm "Quick Save"