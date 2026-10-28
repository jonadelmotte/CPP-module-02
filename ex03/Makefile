NAME = fixed

FILES = main Fixed Point bsp\

SRC_DIR = src/
OBJ_DIR = obj/

CCMAC = clang++
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

INCLUDE = include/

SRC = $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(FILES)))
OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILES)))

OBJF = .cache_exits

GREEN = \033[0;92m
YELLOW = \033[33m
BLUE = \033[34m
RESET = \033[0;39m

$(OBJF):
	@mkdir -p $(OBJ_DIR)
	@echo -e "$(BLUE)Obj directory created$(RESET)"

vpath %.cpp $(SRC_DIR)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CCMAC) $(FLAGS) $(OBJ) -g3 -o $(NAME)
	@echo -e "$(GREEN)$(NAME) compiled !!$(RESET)"

$(OBJ_DIR)%.o: %.cpp $(INCLUDE) Makefile | $(OBJF)
	@$(CCMAC) $(FLAGS) -c -g3 $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo -e "$(YELLOW)Obj destroyed !!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo -e "$(YELLOW)Executable destroyed !!$(RESET)"

re: fclean all

.PHONY: all clean fclean re