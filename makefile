CXX = g++
CFLAGS = -Wall -g
 
driver: driver.o address.o person.o book.o bookstore.o
    $(CXX) $(CFLAGS) -o driver driver.o address.o person.o book.o bookstore.o
 
driver.o: driver.cpp address.hpp person.hpp book.hpp bookstore.hpp
    $(CXX) $(CFLAGS) -c driver.cpp
 
address.o: address.hpp

person.o: address.hpp person.hpp
 
book.o: address.hpp person.hpp book.hpp

bookstore.o: address.hpp person.hpp book.hpp bookstore.hpp

clean:
	rm -f *.cpp *.o *.hpp all

run:
	@$(MAKE) && ./$(driver) <input.txt> <output.txt>