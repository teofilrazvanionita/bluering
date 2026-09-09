# Makefile.inc - common definitions used by all makefiles

CC = gcc
bluering_DIR = ../../
bluering_INCL_DIR_SERVER = ${bluering_DIR}/server/include
bluering_INCL_DIR_CLIENT = ${bluering_DIR}/client/include

CFLAGS = -g \
		-Wall \
		-I/usr/include/nacl \
		-Wno-sign-compare \
		-Wno-unused-parameter \
		-Wextra \
		-DDEBUG
		
LDLIBS = -lpthread -lnacl

RM = rm -f
