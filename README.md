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

`write`  (`man 2 write`)
`malloc`  (`man 3 malloc`)
`free`  (`man 3 free`)
`va_start`  (`man 3 va_start`)
`va_end`  (`man 3 va_end`)
`va_copy`  (`man 3 va_copy`)
`va_arg`  (`man 3 va_arg`)

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
3) The prototypes of all our defined functions.
4) Finally, there is a structure that supports strings and functions.

### [printf](./_printf.c)
* This is going to be our main function, it has a the follow prototype int `_printf(const char *format, ...);`. It receives a variadic format and performs the buffer, then starts to save the string passed through format in the buffer and call a function depending on the flag that is passed with the % sign, it also saves the output in the buffer once the function is performed and return the last position of the buffer.

### [get_type](./get_type.c)
* Return the function passed through the % flag, prototype `int (*get_type(char *s))(va_list arguments, char *buffer, int i_b);`.

### [p_string](./p_string.c)
* Flag %c, the prototype `int p_char(va_list arguments, char *buffer, int i_b);` .

### [p_string](./p_string.c)
* Flag %s, the `int p_string(va_list arguments, char *buffer, int i_b);`.

### [p_int](./p_int.c)
* Flag %s, the `int p_int(va_list arguments, char *buffer, int i_b);`.


### [p_binary](./p_binary.c)
* `int p_binary(va_list arguments, char *buffer, int i_b);`

### [p_string](./p_string.c)






int p_binary(va_list arguments, char *buffer, int i_b);
int p_percent(va_list arguments, char *buffer, int i_b);
int p_rot13(va_list arguments, char *buffer, int i_b);
int p_reverse(va_list arguments, char *buffer, int i_b);
int p_unumber(va_list arguments, char *buffer, int i_b);
int p_hexa(va_list arguments, char *buffer, int i_b);
int p_Hexad(va_list arguments, char *buffer, int i_b);
int p_octal(va_list arguments, char *buffer, int i_b);
int p_address(va_list arguments, char *buffer, int i_b);
int p_Sstring(va_list arguments, char *buffer, int i_b);
int print_number(int n, char *buffer, int i_b);
char *print_binary(int n);
int Hexa(char s, char *buffer, int i_b);
int _strlen(char *string);
int _putchar(char c);


---

## Authors
* **Julian David Naranjo** - [JDorangetree](https://github.com/JDorangetree) - [@JD_orangetree](https://twitter.com/JD_orangetree)
* **Campo Elias Pinillos** - [campopinillos](https://github.com/campopinillos) - [@campopinillos](https://twitter.com/CampoPinillos)
