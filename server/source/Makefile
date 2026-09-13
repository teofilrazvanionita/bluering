include ../../Makefile.inc 

LINUX_EXE = bluering

EXE = ${LINUX_EXE}

objects = bluering.o

all : ${EXE}

${EXE}: $(objects)
	${CC} $(objects) -o ${EXE} ${LDLIBS}

bluering.o: bluering.c ${bluering_INCL_DIR_SERVER}/bluering.h
	${CC} bluering.c -I${bluering_INCL_DIR_SERVER} $(CFLAGS) -c -o $@

.PHONY : clean
clean : 
	-${RM} ${EXE} $(objects) *~ .*~

showall :
	@ echo ${EXE}
