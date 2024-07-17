# Makefile
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
question_0: 0-linear.c tests/test_linear.c search_algos.h
	echo "making quetion_0"
	gcc ${CFLAGS} 0-linear.c tests/test_linear.c -o executables/question_0
	chmod u+x executables/question_0
question_1: 1-binary.c tests/test_binary.c search_algos.h
	echo "making quetion_1"
	gcc ${CFLAGS} 1-binary.c tests/test_binary.c -o executables/question_1
	chmod u+x executables/question_1
question_2: 100-jump.c tests/test_jump.c search_algos.h
	echo "making quetion_2"
	gcc ${CFLAGS} 100-jump.c tests/test_jump.c -lm -o question_2
	chmod u+x question_2