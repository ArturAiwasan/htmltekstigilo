CXX = g++
CXXFLAGS = -Wall

SOURCES = main.cxx

OBJECTS = $(SOURCES: .cpp = .o)

TARGET = htmltekstigilo

$(TARGET): $(OBJECTS)
	$(CXX) $^ -o $@

clean:
	$(RM) $(TARGET) $(OBJECTS)
