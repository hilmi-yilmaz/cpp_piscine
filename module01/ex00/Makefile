CC = clang++
CFLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98

SRC_FILES = main.cpp \
			Zombie.cpp \
			newZombie.cpp \
			randomChump.cpp

HEADER_FILES = Zombie.hpp

OBJ_FILES = $(SRC_FILES:%.cpp=%.o)

NAME = zombie

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
	rm $(NAME)

re: fclean all
