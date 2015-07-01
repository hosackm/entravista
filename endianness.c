#include <stdio.h>
#include <stdint.h>

typedef enum
{
    TYPE_ENDIANNESS_LITTLE = 0,
    TYPE_ENDIANNESS_BIG
}TYPE_ENDIANNESS;

unsigned int find_endianness();
void swap_endianness_8(uint8_t *i);

int main(int argc, char *argv[])
{
    const unsigned int end = find_endianness();
    printf("Your system is: ");
    printf( (end == TYPE_ENDIANNESS_LITTLE) ? "little endian\n" : "big endian\n" );
}

unsigned int find_endianness()
{
    uint32_t i;
    char *first_byte = &i;
    return (*first_byte) ? TYPE_ENDIANNESS_BIG : TYPE_ENDIANNESS_LITTLE;
}

void swap_endianness_8(uint8_t *i)
{
    
}
