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
question_3: 102-interpolation.c tests/test_interpolation.c search_algos.h
	echo "making quetion_3"
	gcc ${CFLAGS} 102-interpolation.c tests/test_interpolation.c -o question_3
	chmod u+x question_3
question_4: 103-exponential.c tests/test_exponential.c search_algos.h 1-binary.c
	echo "making quetion_4"
	gcc ${CFLAGS} 1-binary.c 103-exponential.c tests/test_exponential.c -lm -o question_4
	chmod u+x question_4