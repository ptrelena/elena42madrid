cc get_next_line_main.c get_next_line.c get_next_line_utils.c get_next_line.h
valgrind --track-origins=yes --leak-check=full ./a.out try2.txt
