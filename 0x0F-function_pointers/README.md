This is a folder containing files i used to learn about function pointers
function pointers are pointers that point to the first bytes of the function or the code.
syntax: return_type (*func1) (input_type);
        /* two ways to initialize the function pointers*/
        func1() = &name_of_func; /* saving the address into the pointer in this case we must use it as an adress*/ or
        func1() = name_of_func;/* use the pointer as we normally use*/
we use function pointers in function declaration when we are not sure the type of funciton we are using.