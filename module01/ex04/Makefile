CC = clang++
CFLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98

SRC_FILES = main.cpp \

OBJ_FILES = $(SRC_FILES:%.cpp=%.o)

NAME = ex04

all: $(NAME)

run: all
	./$(NAME) text.txt hilmi ali

$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
