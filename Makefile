CC = gcc
TARGET = main
PROGNAME = Engine
CFLAGS = -lm -lglut -lGL -lGLU
MAPEDITOR = src/map/mapedit

all:
	${CC} src/${TARGET}.c ${CFLAGS} -o ${PROGNAME}
run:
	./${PROGNAME}
mapedit:
	python ${MAPEDITOR}.py