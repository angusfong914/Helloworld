.PHONY : all clean cleanall

all: Hello World Print

Hello : Hello.o
	@echo Link the Hello.o and build Hello.exe
	@cc -o Hello.exe Hello.o
Hello.o : Hello.c
	@echo Compile the Hello.c to Hello.o
	@cc -c Hello.c
World : World.o
	@echo Link the World.o and build World.exe
	@cc -o World.exe World.o
World.o : World.c
	@echo Compile the World.c to World.o
	@cc -c World.c
Print : Print.o
	@echo Link the Print.o and build Print.exe
	@cc -o Print.exe Print.o
Print.o : Print.c
	@echo Compile the Print.c
	@cc -c Print.c
clean :
	-@rm -f *.o
	@echo All *.o are removed.
cleanall : clean
	-@rm -f *.exe
	@echo All *.exe are removed.
