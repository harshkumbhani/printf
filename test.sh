# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: harsh <harsh@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/25 23:50:17 by harsh             #+#    #+#              #
#    Updated: 2023/04/26 00:20:17 by harsh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

compare_output() {
  original_output=$(printf "$1" "${@:2}")
  custom_output=$(./test_app "$1" "${@:2}")

  if [[ "$original_output" == "$custom_output" ]]; then
    printf "\e[32mOK\e[0m\n"
  else
    printf "\e[31mKO\e[0m\n"
  fi
}

# Compile the custom_printf app without using makefile
cc -o test_app -I. ft_printf.c ft_printnum.c ft_printstr.c main.c

# Test cases for each format specifier
echo "Testing %c:"
compare_output "Char: %c" "A"
compare_output "Char: %c" "Z"
compare_output "Char: %c" "a"

echo "Testing %s:"
compare_output "String: %s" "Hello, World!"
compare_output "String: %s" "testing"
compare_output "String: %s" "edge cases"

echo "Testing %d:"
compare_output "Decimal: %d" 42
compare_output "Decimal: %d" -42
compare_output "Decimal: %d" 2147483647
compare_output "Decimal: %d" -2147483648

echo "Testing %i:"
compare_output "Integer: %i" -42
compare_output "Integer: %i" 0
compare_output "Integer: %i" 2147483647
compare_output "Integer: %i" -2147483648

echo "Testing %u:"
compare_output "Unsigned: %u" 42
compare_output "Unsigned: %u" 0
compare_output "Unsigned: %u" 4294967295

echo "Testing %x:"
compare_output "Hex (lowercase): %x" 42
compare_output "Hex (lowercase): %x" 0
compare_output "Hex (lowercase): %x" 4294967295

echo "Testing %X:"
compare_output "Hex (uppercase): %X" 42
compare_output "Hex (uppercase): %X" 0
compare_output "Hex (uppercase): %X" 4294967295

echo "Testing %%:"
compare_output "Percent sign: %%"
compare_output "100%% correct"

# Cleanup
rm -f test_app
