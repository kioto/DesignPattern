#
# Makefile
#

CXX		= g++
CXXFLAGS	= -Wall -g -std=c++11
LDXX		= g++
LDXXFLAGS	=
SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)
INCLUDES	=
TARGET		= calc

all:$(TARGET)

doc:
	@doxygen Doxygen

$(TARGET): $(OBJS)
	$(LDXX) $(OBJS) -o $@

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $< -o $@

clean:
	-rm -fr $(OBJS) $(TARGET) *~ ./html

# end of file
