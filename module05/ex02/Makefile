CC = c++
CFLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98

SRC_FILES = main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp

HEADER_FILES = 	Bureaucrat.hpp \
				Form.hpp \
				ShrubberyCreationForm.hpp

OBJ_FILES = $(SRC_FILES:%.cpp=%.o)

NAME = ex02

all: $(NAME)

run: all
	./$(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp $(HEADER_FILES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all