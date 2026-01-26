#include <stdio.h>
#include <stdint.h>

#define BIT(n)			(1U << (n))

#define MASK			(BIT(0) | BIT(3) | BIT(7))

#define SETBIT(my_reg, mask)			(my_reg | mask)
#define CLEARBIT(my_reg, mask)			(my_reg &(~mask))
#define TOGGLEBIT(my_reg, mask)			(my_reg^(mask))
#define READBIT(my_reg, mask )			(my_reg & mask)



int main()
{
	uint16_t reg = 0xFFFF;

	printf("The hardware resgister init condition:0x%04X\n", reg);

	/********************SETBIT**************************/
	reg = SETBIT(reg, MASK);
	printf("After doing setbit operation:0x%04X\n", reg);

	/********************CLEARBIT************************/
	reg = CLEARBIT(reg, MASK);
	printf("After doing clearbit operation,0x%04X\n", reg);


	/*********************TOGGLEBIT*********************/
	reg = TOGGLEBIT(reg, MASK);
	printf("AFTER doing toggle bit operation:0x%04X\n", reg);


	/********************READBIT***********************/

	if (READBIT(reg, BIT(7)))
	{
    	    printf("Bit 7 is SET\n");
	}
	else
	{
    	    printf("Bit 7 is CLEAR\n");
	}

	//reg = READBIT(reg, MASK);
	//printf("After doing read bit operation:0x%04X\n", reg);

	return 0;
}

