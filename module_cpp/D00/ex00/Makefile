SRCS  = megaphone.cpp \


cc = clang++
ARG = -Wall -Wextra -Werror
OBJS = $(SRCS:.cpp=.o)
NAME = MegaPhone

%.o : %.cpp
	$(cc) $(ARG) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBJS)
	$(cc) $(ARG) $(OBJS) -o $(NAME)

clean :
	/bin/rm -f $(OBJS)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all