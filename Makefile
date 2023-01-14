NAME = push_swap

SRC_DIR = ./mandatory
OBJ_DIR = ./obj
SRCS	= try.c
OBJS	= $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

# FT_PRINTF
FT_PRINTF_DIR  = ./ft_printf
FT_PRINTF_SRCS = ft_printf_utils.c ft_printf.c
FT_PRINTF_OBJS = $(FT_PRINTF_SRCS:%.c=$(OBJ_DIR)/%.o)


CC 		= gcc
CCD		= gcc -fsanitize=address -g3
CFLAGS	= -Wall -Wextra -Werror

RM		= rm -rf

INCLUDES= $(addprefix -I, includes libft ft_printf)
LIB		= -Llibft -lft

all: $(NAME)

$(NAME): $(OBJS) $(FT_PRINTF_OBJS) libft/libft.a
	$(CCD) $(CFLAGS) $(OBJS) $(FT_PRINTF_OBJS) $(INCLUDES) $(LIB) -o $@

libft/libft.a:
	@make all -C libft
	@make bonus -C libft

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CCD) $(INCLUDES) -c $< -o $@

$(OBJ_DIR)/%.o: $(FT_PRINTF_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CCD) $(INCLUDES) -c $< -o $@

test:
	make && ./push_swap 2 31 1 -4 2

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)
	@make fclean -C libft

re: fclean all

.PHONY: all clean fclean re