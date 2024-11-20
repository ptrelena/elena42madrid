/*
• Escribe una función que muestre uno a uno en la pantalla los caracteres de un string.
• La dirección del primer carácter del string está incluida en el puntero utilizado como parámetro para a la función.
• El prototipo de la función deberá ser el siguiente: void ft_putstr(char *str)
*/

#include <unistd.h>

void ft_putstr(char *str)
{
    char sentence[6];
    str = &sentence[20]

    for (i=0, sentenc)
    {
        write(1, &sentence, 1);
    }
}

int main()
{
    char sentence[6];
    char *str;

    sentence[6] = "Hello";
    str = &sentence;
    
    ft_putstr(str);
    return 0;
}