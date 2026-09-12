include ../../Makefile.inc 

LINUX_EXE = bluering

EXE = ${LINUX_EXE}

objects = bluering.o

all : ${EXE}

${EXE}: $(objects)
	${CC} $(objects) -o ${EXE} ${LDLIBS}

.PHONY : clean
clean : 
	-${RM} ${EXE} $(objects) *~ .*~

showall :
	@ echo ${EXE}
