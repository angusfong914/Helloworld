all: Hello World
.PHONY : all clean cleanall

Hello : Hello.o
	@echo Link the Hello.o and build Hello.exe
	cc -o Hello.exe Hello.o
World : World.o
	@echo Link the World.o and build World.exe
	cc -o World.exe World.o
Hello.o : Hello.c
	@echo Compile the Hello.c to Hello.o
	cc -c Hello.c
World.o : World.c
	@echo Compile the World.c to World.o
	cc -c World.c
clean :
	-@rm *.o
cleanall : clean
	-@rm *.exe
