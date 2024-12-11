# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orezek <orezek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 10:59:06 by orezek            #+#    #+#              #
#    Updated: 2024/12/11 18:38:26 by orezek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BOLD =	\033[1m
GREEN =	\033[32m
RED =	\033[31m
BCYAN =	\033[96m
NC =	\033[0m

# name
NAME =		bureaucrat

# compiler
CCP =		c++
CFLAGS =	-Wall -Wextra -Werror -std=c++98

# sources
SRC =	main.cpp Bureaucrat.cpp Form.cpp

# objects
OBJ_PATH =	obj/
OBJ =		$(SRC:.cpp=.o)
OBJS =		$(addprefix $(OBJ_PATH), $(OBJ))

# binary folder
BIN_PATH =	bin/
BIN_NAME =	$(BIN_PATH)$(NAME)

all: $(BIN_NAME)

$(OBJ_PATH)%.o : %.cpp
	$(CCP) $(CFLAGS) -c $< -o $@

$(OBJS): | $(OBJ_PATH)

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(BIN_NAME): $(OBJS) | $(BIN_PATH)
	@echo "$(BOLD)$(BCYAN)[ Compiling $(NAME)... ]$(NC)"
	$(CCP) $(CFLAGS) $(OBJS) -o $(BIN_NAME)
	@echo "$(BOLD)$(GREEN)[ Program $(NAME) ready in $(BIN_PATH)! ]$(NC)"

$(BIN_PATH):
	@mkdir -p $(BIN_PATH)

clean:
	@rm -Rf $(OBJ_PATH)
	@echo "$(BOLD)$(RED)[ Obj files deleted ]$(NC)"

fclean: clean
	@rm -f $(BIN_NAME)
	@rm -Rf $(BIN_PATH)
	@echo "$(BOLD)$(RED)[ Program deleted ]$(NC)"

re: fclean all

.PHONY: all re clean fclean
