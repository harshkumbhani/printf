# ft_printf

This repository contains an implementation of the `ft_printf` project, a recreation of the standard C library function `printf`. The objective of this project is to understand variadic functions, formatting, and handling different data types in C programming.

## About printf

The `printf` function is a popular function in the C standard library (stdio.h) used for formatted output. It sends formatted output to the standard output stream (stdout) based on a format string and a variable number of arguments.

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
