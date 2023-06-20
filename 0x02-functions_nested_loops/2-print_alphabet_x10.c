#include "main.h"
/**
 * print_alphabet_x10 - print all alphabet in lowercase ten times
 */
void print_alphabet_x10(void)
{
        int x, c;

        for (x = 0 ; x < 10 ; x++)
        {
        for (c = 97 ; c < 123 ; c++)
        {
        _putchar(c);
        }
        _putchar('\n');
}
