
SRCS = ft_strlen.s \
      ft_strcpy.s \
      ft_strcmp.s \
      ft_strdup.s \
      ft_write.s \
      ft_read.s
cc = nasm
ARG = -f elf64
OBJS = $(SRCS:.s=.o)
NAME = libasm.a

%.o : %.s
	$(cc) $(ARG) -o $@ $<

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
	gcc main.c $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
