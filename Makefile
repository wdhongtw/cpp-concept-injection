CC = clang
CXX = clang++
CXXFLAGS += -std=c++20

SRCS = $(wildcard *.cc)
OBJS = $(subst .cc,.o,$(SRCS))

main: $(OBJS)
	$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

clean:
	$(RM) $(OBJS)
