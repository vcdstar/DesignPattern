CPPFILE = $(shell find . -iname '*.cpp')
HFILE = $(shell find . -iname '*.h')
OBJS = $(patsubst %.cpp, %.o, $(CPPFILE))  

.PHONY: all clean

main: $(CPPFILE) $(HFILE) 
	g++ -std=c++11 -g -ggdb -o $@ $(CPPFILE) $(HFILE) 

clean:
	$(shell find . -iname '*.o')
	rm ./main