CXX=g++
CXXFLAGS=-g -O2
FLTKFLAGS=$(shell fltk-config --ldflags)

honkinator: app.o appfuncs.o main.o honkconv.o
	$(CXX) $(CXXFLAGS) -o $@ $^ $(FLTKFLAGS)

app.o: app.cxx
	$(CXX) $(CXXFLAGS) -c $^ -o $@

appfuncs.o: appfuncs.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

honkconv.o: honkconv.cpp
	$(CXX) $(CXXFLAGS) -c $^ -o $@

app.cxx: app.fl
	fluid -c $^

.PHONY: clean

clean:
	rm -f *.o honkinator app.cxx app.h
