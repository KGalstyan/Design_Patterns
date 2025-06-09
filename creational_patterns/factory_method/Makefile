NAME = factory
CPP = g++
CPPFLAGS = -Wall -Wextra -Werror
SRC = main.cpp \
		TextDocument.cpp TextMenu.cpp TextToolbar.cpp \
		PDFDocument.cpp PDFMenu.cpp PDFToolbar.cpp \
		TextFactory.cpp PDFFactory.cpp
HEADER = TextDocument.hpp TextMenu.hpp TextToolbar.hpp \
		PDFDocument.hpp PDFMenu.hpp PDFToolbar.hpp \
		TextFactory.hpp PDFFactory.hpp AbstractFactory.hpp \
		Document.hpp Toolbar.hpp Menu.hpp
OBJ_DIR = obj
OBJS = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(HEADER)
	if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	if exist $(OBJ_DIR) rmdir /s /q $(OBJ_DIR)

fclean: clean
	if exist $(NAME).exe del $(NAME).exe

re: fclean all

.PHONY: all clean fclean re