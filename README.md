# mini_printf
Minimal recode of printf function in c

### Flags

%c : char
```c
mini_printf("%c", 'A');
```

%s : char*
```c
mini_printf("%s", "hello");
```

%b : bool
```c
mini_printf("%b", true);
mini_printf("%b", false);
```

%d : int
%i : int
```c
mini_printf("%d", 13);
mini_printf("%i", 21);
mini_printf("%d", -42);
```

%f : float
```c
mini_printf("%f", 1.67);
```

%% : NOTHING
```c
mini_printf("%%");
```

### How to use it in your project ?

Clone the repository or download it.

Use the Makefile to build the library mini_printf.a
```bash
> make          # build the lib
> make re       # rebuild if it exists
> make clean    # clean the tmp file
> make fclean   # clean all, also the lib
```

Include the mini_printf.h in your c file.
```c
#include "mini_printf.h"
```

Call the mini_printf function and use it as your wish.
```c
mini_printf("Hello, my name is %s !", "Adam");
```

Then compile your code with the library.
```
gcc main.c -L. -l:mini_printf.a
```

Execute your binary !

### Author
dam, github : quidam213
