SRC := ./src/init_cards.c\
			 ./src/create_new_dect.c\

run : 
	@gcc ./src/main.c -o main $(SRC) -g3
	@./main

all : run

fclean:
	@rm main
