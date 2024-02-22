#########################################
###		 		CONFIG	      	      ###
#########################################

NAME		= push_swap

CC			= cc
RM			= rm -rf
CFLAGS		= -Wall -Werror -Wextra $(INCLUDES)


LIBFT_DIR	= ./libft
LIBFT		= ./libft/libft.a
LIBFT_SOURCES	= $(LIBFT_DIR)/*.c
LIBFT_OBJ	= $(LIBFT_DIR)/*.o

MKDIR		= mkdir -p

SOURCES_DIR	= src
SOURCES		= $(wildcard $(SOURCES_DIR)/*.c)
OBJ			= $(addprefix $(OBJ_DIR)/, $(notdir $(SOURCES:.c=.o)))
OBJ_DIR		= obj

INCLUDES	= -I ./includes

#########################################
###					COLORS		      ###
#########################################

RED				= \033[0;31m
GREEN			= \033[0;32m
YELLOW			= \033[0;33m
BLUE			= \033[0;34m
MAGENTA			= \033[0;35m
CYAN			= \033[0;36m
RESET			= \033[0m
MOVEUP			= \033[F

#########################################
###		 		RULES	      	      ###
#########################################

all: $(NAME)

$(LIBFT): 
	@make -s -C $(LIBFT_DIR) 

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(SOURCES) $(LIBFT)
	@echo "$(GREEN)Compiled $(NAME)"
$(OBJ_DIR)/%.o: $(SOURCES_DIR)/%.c
	@$(MKDIR) $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(YELLOW)Compiled $<"

clean:
	@make clean -C $(LIBFT_DIR)

fclean:
	@make fclean -C $(LIBFT_DIR)
	@$(RM) $(OBJ_DIR)
	@$(RM) $(NAME)
	@echo "$(GREEN)Removed $(NAME) and the object files"

re:
	@make fclean
	@make



.PHONY:			all clean fclean re 