#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints the quote "and that piece of art is useful" - Dora Korpar, 2015-10-19
 *
 * Return: Always 1 (Error code)
 */
int main(void)
{
    char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 59; // Length of the quote

    // Write the quote to the standard error stream (file descriptor 2)
    if (write(2, quote, len) != len)
        return (1); // Return an error code if not all bytes were written

    return (0);
}
