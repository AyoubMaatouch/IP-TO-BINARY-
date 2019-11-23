NAME = binar

all : $(NAME)

$(NAME) :
	gcc -o $(NAME) src/*.c
	$(info *****Your Program is ready to use*****)
clean : 
	rm -rf $(NAME)
re : clean all

.PHONY : all clean re $(NAME)
.SILENT: all clean re $(NAME)
