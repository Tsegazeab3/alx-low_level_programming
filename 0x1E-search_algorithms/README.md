#This is the file where i learned different search algorithms. 
I inculded the main files inside the repo and the test files inside the test directory
general requirements for my code:
    <!-- Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    A README.md file, at the root of the folder of the project, is mandatory
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    You are not allowed to use global variables
    No more than 5 functions per file
    You are only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc, … is forbidden.
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions should be included in your header file called search_algos.h
    Don’t forget to push your header file
    All your header files should be include guarded  -->

1) linear algorithms:
        I did the question on 0_linear.c and made the test file in tests/main_0.c
        I used this resource: 
        https://en.wikipedia.org/wiki/Linear_search
        https://www.youtube.com/watch?v=246V51AWwZM
        the question was: 
        <!-- Write a function that searches for a value in an array of integers using the Linear search algorithm
        Prototype : int linear_search(int *array, size_t size, int value);
        Where array is a pointer to the first element of the array to search in
        size is the number of elements in array
        And value is the value to search for
        Your function must return the first index where value is located
        If value is not present in array or if array is NULL, your function must return -1 -->
        this is the is used when the array is not sorted  
        has o(n) time complexity
2) binary algorithm:
        I did the question on 0_binary.c and made the test file in tests/main_0.c
        I used this resources:
        https://en.wikipedia.org/wiki/Binary_search_algorithm
        https://www.youtube.com/watch?v=Uuyv88Tn9iU
        the question was:
        <!-- Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
            Prototype : int binary_search(int *array, size_t size, int value);
            Where array is a pointer to the first element of the array to search in
            size is the number of elements in array
            And value is the value to search for
            Your function must return the index where value is located
            You can assume that array will be sorted in ascending order
            You can assume that value won’t appear more than once in array
            If value is not present in array or if array is NULL, your function must return -1
            You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example) -->
    