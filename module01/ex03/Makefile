CC = c++
CFLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98

SRC_FILES = main.cpp \
			Weapon.cpp \
			HumanA.cpp \
			HumanB.cpp

HEADER_FILES = 	Weapon.hpp \
				HumanA.hpp \
				HumanB.hpp

OBJ_FILES = $(SRC_FILES:%.cpp=%.o)

NAME = ex03

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
