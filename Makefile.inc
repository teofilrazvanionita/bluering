# Makefile.inc - common definitions used by all makefiles

CC = gcc
bluering_DIR = ../../
bluering_INCL_DIR_SERVER = ${bluering_DIR}/server/headers
bluering_INCL_DIR_CLIENT = ${bluering_DIR}/client/headers

CFLAGS = -g \
		-Wall \
		-I/usr/include/nacl \
		-Wno-sign-compare \
		-Wno-unused-parameter \
		-Wextra \
		-DDEBUG
		
LDLIBS = -lpthread -lnacl

RM = rm -f
