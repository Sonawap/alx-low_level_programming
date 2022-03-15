#include <unistd.h>
/**
*
* putchar 
*
* Return: success
*/
int _putchar(char c)
{
  return (write(1,&c, 1));
}
