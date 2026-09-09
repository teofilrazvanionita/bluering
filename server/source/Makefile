include ../../Makefile.inc 

LINUX_EXE = bluering

EXE = ${LINUX_EXE}

objects = 

all : ${EXE}

${EXE}: $(objects)
	${CC} -c $(objects) -o ${EXE} ${LDLIBS}

.PHONY : clean
clean : 
	-${RM} ${EXE} $(objects) *~ .*~

showall :
	@ echo ${EXE}
