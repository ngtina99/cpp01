NAME = zombiehorde

SRC = main.cpp Zombie.cpp zombiHorde.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Zombie.hpp

CC = c++
RM = rm -f

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(HEADER) $(OBJ)
	$(CC) $(CPPFLAGS) $(HEADER) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re