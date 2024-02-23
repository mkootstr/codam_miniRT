NAME = miniRT
MLX = MLX42/build/libmlx42.a
LIBFT = Libft/libft.a
HEADER = miniRT.h

OBJ = main.c

CFLAGS = -Wall -Wextra -Werror # -g -fsanitize=address

all: $(MLX) $(LIBFT) $(NAME)



$(MLX):
	make -C MLX42/build

$(LIBFT):
	make -C Libft

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $(OBJ) $(LIBFT) $(MLX) -Iinclude -ldl -lglfw -pthread -lm

clean:
	make clean -C MLX42/build
	make clean -C Libft

fclean: clean
	rm -f $(MLX)
	rm -f $(LIBFT)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re