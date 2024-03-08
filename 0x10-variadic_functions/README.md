a folder containing material related to variadic fucntions
variadic functions are function that can have different arguments
they are done by using stdarg.h
they are used by using the following macros
va_list list_name: creates the list of argunemnts
va_start(list_name,last_input_value): shows where to start
va_arg(list_name, data_type): returns one value inside the list
va_end: ends the macro