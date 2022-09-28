CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_FILES = Account.cpp \
			tests.cpp

OBJ_FILES = $(SRC_FILES:%.cpp=%.o)

NAME = ex02

all: $(NAME)

run: all
	@./$(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -rf $(NAME)

re: fclean all