<p align="center"><img src="http://www.holbertonschool.com/holberton-logo.png"></p>

<p align="center"><h1>printf</h1></p>

---

## Description
The main purpose of this repository is to build a printf function. This **printf project** was develop by the team
of Julian [David Naranjo](https://github.com/JDorangetree) and [Campo Elías Pinillos](https://github.com/campopinillos). 
As students of [Holberton School](https://www.holbertonschool.com), we will apply what we have learnt till this moment
at Holberton School and to achieve this project, the following requirements are necessary:

## Pre-requisites

### Authorized functions and macros:

-   `write`  (`man 2 write`)
-   `malloc`  (`man 3 malloc`)
-   `free`  (`man 3 free`)
-   `va_start`  (`man 3 va_start`)
-   `va_end`  (`man 3 va_end`)
-   `va_copy`  (`man 3 va_copy`)
-   `va_arg`  (`man 3 va_arg`)

### Compilation:

Our code was compiled in this way:

```
gcc -Wall -Werror -Wextra -pedantic *.c
```
We carefully did not push any c file containing a main function in the root directory in our project. So, if you are going to test it, you should use your own main c files.
All our main files include our main header file [holberton.h](./holberton.h): **#include holberton.h**
While we test our main c file cases, we use the gcc flags with our _printf function and the standard printf function to compare the different outputs and improve our _printf performance.

---

## Files

Now, we are going to show you the files that support our function and that we use to get the outputs.

### [holberton.h](./holberton.h)
* In the hoberton.h file we will find the following things:
1) Include guard definition.
2) A macro definition to a variable named SIZE, that we have used to establish the buffer size.
3) A call for some standar libraries of the system.
4) The prototypes of all our defined functions.
5) Finally, there is a structure that supports strings and functions.

### [printf](./_printf.c)
* This is going to be our main function, it has a the follow prototype int `_printf(const char *format, ...);`. It receives a variadic format and performs the buffer, then starts to save the string passed through format in the buffer and call a function depending on the flag that is passed with the % sign, it also saves the output in the buffer once the function is performed and return the last position of the buffer.

### [get_type](./get_type.c)
* Return the function passed through the % flag, prototype `int (*get_type(char *s))(va_list arguments, char *buffer, int i_b);`. Now and so on, this function will get one of the following cases depending on which flag is next to the % percent sign.

| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| i  | Signed decimal integer |
| d  | Decimal number |
| s  | String  |
| b  | Binary  |
| o  | Octal  |
| u  | Unsigned integer  |
| x  | Hexadecimal (lowercase) |
| X  | Hexadecimal (uppercase)  |
| p  | Pointer address  |
| r  | Reverse string |
| R  | ROT13 of string |
| S  | String and special chars ASCII value  |
| %  | Percent character  |

The following functions have the same structure, all of them receive a va_list of the arguments passed to the _printf via variadic ellipsis ... inputs, also require a define buffer that it is going to be filled and the position of the buffer where is going to be the next argument or just to return the total characters in the buffer that is the same what return the _printf function.

#### [p_char](./p_char.c)
* Flag %c, the prototype:
```c
int p_char(va_list arguments, char *buffer, int i_b);
```

#### [p_string](./p_string.c)
* Flag %s, the prototype:
```c
int p_string(va_list arguments, char *buffer, int i_b);
```

#### [p_int](./p_int.c)
* Flag %i or %d, the prototype:
```c
int p_int(va_list arguments, char *buffer, int i_b);
```
It also has a aditional function to print the number into a string of characters.
```c
int print_number(int n, char *buffer, int i_b);
```

#### [p_binary](./p_binary.c)
* Flag %b, the prototype:
```c
int p_binary(va_list arguments, char *buffer, int i_b);
```
It also has a aditional function to calculate the binary number.
```c
char *print_binary(int n);
```

#### [p_rot13](./p_rot13.c)
* Flag %R, the prototype:
```c
int p_rot13(va_list arguments, char *buffer, int i_b);
```

#### [p_reverse](./p_reverse.c)
* Flag %r, the prototype
```c
int p_reverse(va_list arguments, char *buffer, int i_b);
```

#### [p_unumber](./p_unumber.c)
* Flag %u, the prototype:
```c
int p_unumber(va_list arguments, char *buffer, int i_b);
```

#### [p_hexa](./p_hexa.c)
* Flag %x, the lowercase prototype:
```c
int p_hexa(va_list arguments, char *buffer, int i_b);
```

#### [p_Hexad](./p_Hexad.c)
* Flag %X, the uppercase prototype:
```c
int p_Hexad(va_list arguments, char *buffer, int i_b);
```

#### [p_octal](./p_octal.c)
* Flag %o, the prototype:
```c
int p_octal(va_list arguments, char *buffer, int i_b);
```

#### [p_address](./p_address.c)
* Flag %p, the prototype:
```c
int p_address(va_list arguments, char *buffer, int i_b);
```

#### [p_Sstring](./p_Sstring.c)
* Flag %S, the prototype:
```c
int p_Sstring(va_list arguments, char *buffer, int i_b);
```
It also has a aditional function to calculate the hexadecimal number.
```c
int Hexa(char s, char *buffer, int i_b);
```

#### [p_percent](./p_percent.c)
* Flag %, the prototype:
```c
int p_percent(va_list arguments, char *buffer, int i_b);
```

### [_strlen](./_strlen.c)
* This file has an auxiliar function, it is going to be used in some of the about files to measure the lenght of a string, its prototype is `int _strlen(char *string);`

---

## Authors
* **Julian David Naranjo** - [JDorangetree](https://github.com/JDorangetree) - [@JD_orangetree](https://twitter.com/JD_orangetree)
* **Campo Elias Pinillos** - [campopinillos](https://github.com/campopinillos) - [@campopinillos](https://twitter.com/CampoPinillos)
