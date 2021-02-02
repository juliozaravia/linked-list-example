# -*- MakeFile -*-

LLPATH = /mnt/c/cpp/linkedlist/
OBJS = $(LLPATH)obj/Debug/main.o $(LLPATH)obj/Debug/src/Builder.o $(LLPATH)obj/Debug/src/Communicator.o $(LLPATH)obj/Debug/src/Global.o $(LLPATH)obj/Debug/src/Helper.o $(LLPATH)obj/Debug/src/Manager.o 
BINARY = $(LLPATH)bin/llexe.exe
COMP = gcc
FLAGS = -Wall -fexceptions -g -Iinclude

all: llexe

llexe: $(OBJS)
	$(COMP) -o $(BINARY) $(OBJS)

$(LLPATH)obj/Debug/main.o: $(LLPATH)main.c $(LLPATH)include/Manager.h $(LLPATH)include/Communicator.h $(LLPATH)include/Codes.h
	$(COMP) $(FLAGS) -c $(LLPATH)main.c -o $(LLPATH)obj/Debug/main.o 

$(LLPATH)obj/Debug/src/Builder.o: $(LLPATH)src/Builder.c $(LLPATH)include/Builder.h $(LLPATH)include/Global.h 
	$(COMP) $(FLAGS) -c $(LLPATH)src/Builder.c -o $(LLPATH)obj/Debug/src/Builder.o

$(LLPATH)obj/Debug/src/Communicator.o: $(LLPATH)src/Communicator.c $(LLPATH)include/Communicator.h $(LLPATH)include/Global.h $(LLPATH)include/Codes.h
	$(COMP) $(FLAGS) -c $(LLPATH)src/Communicator.c -o $(LLPATH)obj/Debug/src/Communicator.o

$(LLPATH)obj/Debug/src/Global.o: $(LLPATH)src/Global.c $(LLPATH)include/Global.h 
	$(COMP) $(FLAGS) -c $(LLPATH)src/Global.c -o $(LLPATH)obj/Debug/src/Global.o

$(LLPATH)obj/Debug/src/Helper.o: $(LLPATH)src/Helper.c $(LLPATH)include/Helper.h $(LLPATH)include/Global.h
	$(COMP) $(FLAGS) -c $(LLPATH)src/Helper.c -o $(LLPATH)obj/Debug/src/Helper.o

$(LLPATH)obj/Debug/src/Manager.o: $(LLPATH)src/Manager.c $(LLPATH)include/Manager.h $(LLPATH)include/Builder.h $(LLPATH)include/Helper.h $(LLPATH)include/Communicator.h $(LLPATH)include/Global.h $(LLPATH)include/Codes.h
	$(COMP) $(FLAGS) -c $(LLPATH)src/Manager.c -o $(LLPATH)obj/Debug/src/Manager.o


clean:
	rm -f $(BINARY)
	rm -f $(OBJS)