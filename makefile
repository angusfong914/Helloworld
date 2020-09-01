.PHONY : all clean cleanall list
exe=Hello World Print fun_call const

all: $(exe)

$(exe) : % : %.o
	@cc -o $@ $<
	@echo Link $< to $@

%.o :%.c
	@cc -c $<
	@echo Compile $< to $@

clean :
	-@rm -f *.o
	@echo All *.o are removed.
cleanall : clean
	-@rm -f *.exe
	@echo All *.exe are removed.
list :
	@echo $(exe)
