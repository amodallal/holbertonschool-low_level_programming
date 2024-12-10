#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 * Return: On success, 1 is returned. On error, -1 is returned.
 */

	int _putchar(char c) {
	return write(1, &c, 1);
	}

void print_alphabet(void) {
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++) {
        _putchar(letter);  
	 }
	 _putchar('\n'); 
} 
