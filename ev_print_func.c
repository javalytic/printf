#include "main.h"

/**
 * ev_print_func - returns the amount of identifier.
 * @s: argument identifier.
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */

int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_character}, {"s", print_string}, {"i", print_integer},
		{"d", print_integer}, {"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex}, {"X", print_upx},
		{"S", print_usr}, {"p", print_add}, {"li", prinlint},
		{"ld", prinlint}, {"lu", prinlunt}, {"lo", prinloct},
		{"lx", prinlhex},{"lX", prinlupx}, {"hi", prinhint},
		{"hd", prinhint}, {"hu", prinhunt}, {"ho", prinhoct},
		{"hx", prinhhex}, {"hX", prinhupx}, {"ho", prinhoct},
		{"#x", prinnhex}, {"#X", prinnupx}, {"#o", prinnoct},
		{"#d", print_integer}, {"#u", print_unt}, {"+i", prinpint},
		{"+d", prinpint}, {"+u", print_unt}, {"+o", print_oct},
		{"+x", print_hex}, {"+X", print_upx}, {" i", prinsint},
		{" d", prinsint}, {" u", print_unt}, {" o", print_oct},
		{" x", print_hex}, {" X", print_prg}, {"l", print_prg},
		{"h", print_prg}, {" +i", prinpint}, {" +d", prinpint},
		{"+ i", prinpint}, {"+ d", prinpint}, {" %", print_prg},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
