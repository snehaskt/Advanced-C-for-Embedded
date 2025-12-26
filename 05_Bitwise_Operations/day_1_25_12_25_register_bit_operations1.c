/*
Name:Snehas KT
Date:25-12-2025
Description:register_bit_operations
sample I/P:
sample O/p:
*/


#include <stdio.h>
#include <stdint.h>

void set_bit(uint8_t *reg, uint8_t pos);
void clear_bit(uint8_t *reg, uint8_t pos);
void toggle_bit(uint8_t *reg, uint8_t pos);
uint8_t read_bit(uint8_t reg, uint8_t pos);

int main()
{
    uint8_t reg;


    set_bit(&reg, 3);
    printf("register value after the Setting bit 3: 0x%02x\n", reg);


    clear_bit(&reg, 3);
    printf("register value after clearing the bit 3: 0x%02x\n", reg);


    toggle_bit(&reg, 7);
    printf("register value after toggle bit 7: 0x%02x\n", reg);



    printf("reading the register bit 7: %d\n", read_bit(reg, 7));


    clear_bit(&reg, 7);
    printf("register value after clear bit 7: 0x%02x\n", reg);


    return 0;

}




void set_bit(uint8_t *reg, uint8_t pos)
{
    *reg |= (1U << 3);

}


void clear_bit(uint8_t *reg, uint8_t pos)
{
    *reg &= (~(1 << 3));

}


void toggle_bit(uint8_t *reg, uint8_t pos)
{
    *reg ^= (1 << 7);
}


uint8_t read_bit(uint8_t reg, uint8_t pos)
{
    return (reg >> pos) & 0x01;
}








    
