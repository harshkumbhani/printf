<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=git,vscode,c" />
  </a>
</p>
<h1 align="center">ft_printf</h1>

<p align="center">
  A custom <strong>partial</strong> implementation of the <code>printf</code> function in C.
</p>

# ft_printf 🖨️

Welcome to **ft_printf**, a custom **PARTIAL** implementation of the famous `printf` function in C. This project is designed to help you learn and understand C programming, variadic functions, and formatting output.

## 📚 Introduction

`ft_printf` is a function that formats and prints data to the standard output. It supports various format specifiers, flags, and data types, making it a versatile tool for displaying information in your C programs.

## 🔧 Function Prototype

```c
int ft_printf(const char *format, ...);


## About printf

The `printf` function is a popular function in the C standard library (stdio.h) used for formatted output. It sends formatted output to the standard output stream (stdout) based on a format string and a variable number of arguments.

# Variadic Functions

Variadic functions are functions that can take a variable number of arguments. The standard C library function `printf` is a well-known example of a variadic function.

## About Variadic Functions

Variadic functions can be declared with an ellipsis (`...`) as the last parameter in the parameter list, indicating that the function accepts a variable number of arguments. To handle the arguments passed to a variadic function, the C standard library provides a set of macros in the `stdarg.h` header.

### stdarg.h Macros

The following macros are used to handle variadic function arguments:

1. `va_list`: A type used to declare a variable that will store the argument list.

2. `va_start(ap, param)`: Initializes the `va_list` object `ap` to start reading arguments after the last named parameter `param`.

3. `va_arg(ap, type)`: Retrieves the next argument from the `va_list` object `ap` with the specified `type`.

4. `va_end(ap)`: Cleans up the `va_list` object `ap` after all arguments have been read.

### Format Specifiers

The format string consists of ordinary characters, escape sequences, and format specifiers, which are used to specify the type and format of the data to be printed. The following table lists some common format specifiers and their meanings:

| Specifier | Description                                     |
| --------- | ----------------------------------------------- |
| `%c`      | Character                                       |
| `%s`      | String of characters                            |
| `%d`      | Signed decimal integer                          |
| `%i`      | Signed decimal integer                          |
| `%u`      | Unsigned decimal integer                        |
| `%x`      | Unsigned hexadecimal integer (lowercase letters)|
| `%X`      | Unsigned hexadecimal integer (uppercase letters)|
| `%p`      | Pointer address                                 |
| `%%`      | Literal percent character (`%`)                 |

### Flags

The `ft_printf` implementation in this repository also supports the following flags:

To be added

## Edge Cases

When implementing `ft_printf`, it is important to consider the following edge cases:

1. Null pointers passed as string arguments (`%s`): In this case, the function should print `(null)`.

2. Negative numbers for signed integer formats (`%d` and `%i`): The function should correctly handle the sign and the conversion of the number.

3. Large numbers and edge values: The function should be able to handle the largest and smallest representable values for each data type (e.g., `INT_MIN`, `INT_MAX`, `UINT_MAX`, and pointer addresses).

4. Precision and field width: The function should respect the specified field width and precision for each format specifier, including correct handling of flags like `0` and `-`.

5. Incorrect or unsupported format specifiers: The function should be able to handle unexpected or unsupported format specifiers gracefully.

## Usage

To use `ft_printf`, compile the source files and include the header `ft_printf.h` in your project. You can then use `ft_printf` just like you would use the standard `printf` function.
