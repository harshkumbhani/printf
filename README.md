<div align="center">
  <h1>
    🖨️ ft_printf
  </h1>
  <p>
    <b><i>A custom <strong>partial</strong> implementation of the <code>printf</code> function from C standard library</i></b>
  </p>
  <p>
    Developed using&nbsp&nbsp
    <a href="https://skillicons.dev">
      <img src="https://skillicons.dev/icons?i=c,vscode,git,bash" />
    </a>
  </p>
</div>



# ft_printf 

Welcome to **ft_printf**, a custom **PARTIAL** implementation of the famous `printf` function in C. This project is designed to help you learn and understand C programming, variadic functions, and formatting output.

## 📚 Introduction

`ft_printf` is a function that formats and prints data to the standard output. It supports various format specifiers, flags, and data types, making it a versatile tool for displaying information in your C programs.

## 🔧 Function Prototype


```int ft_printf(const char *format, ...);```  [(manual)](https://man7.org/linux/man-pages/man3/printf.3.html)


# Variadic Functions

Variadic functions are functions that can take a variable number of arguments. The standard C library function `printf` is a well-known example of a variadic function.

Variadic functions can be declared with an ellipsis (`...`) as the last parameter in the parameter list, indicating that the function accepts a variable number of arguments. To handle the arguments passed to a variadic function, the C standard library provides a set of macros in the `stdarg.h` header.

### stdarg.h Macros

The following macros are used to handle variadic function arguments:

1. `va_list`: A type used to declare a variable that will store the argument list.

2. `va_start(ap, param)`: Initializes the `va_list` object `ap` to start reading arguments after the last named parameter `param`.

3. `va_arg(ap, type)`: Retrieves the next argument from the `va_list` object `ap` with the specified `type`.

4. `va_end(ap)`: Cleans up the `va_list` object `ap` after all arguments have been read.

## 📄 Format Specifiers

| Specifier | Description                                      |
|:---------:|--------------------------------------------------|
|     %c    | Character                                        |
|     %s    | String                                           |
|  %d or %i | Signed decimal integer                           |
|     %u    | Unsigned decimal integer                         |
|     %x    | Unsigned hexadecimal integer (lowercase letters) |
|     %X    | Unsigned hexadecimal integer (uppercase letters) |
|     %p    | Pointer address                                  |
|     %%    | A literal '%' character                          |


## Edge Cases

When implementing `ft_printf`, it is important to consider the following edge cases:

1. Null pointers passed as string arguments (`%s`): In this case, the function should print `(null)`.

2. Negative numbers for signed integer formats (`%d` and `%i`): The function should correctly handle the sign and the conversion of the number.

3. Large numbers and edge values: The function should be able to handle the largest and smallest representable values for each data type (e.g., `INT_MIN`, `INT_MAX`, `UINT_MAX`, and pointer addresses).


5. Incorrect or unsupported format specifiers: The function should be able to handle unexpected or unsupported format specifiers gracefully.

## Usage

To use `ft_printf`, compile the source files and include the header `ft_printf.h` in your project. You can then use `ft_printf` just like you would use the standard `printf` function.
