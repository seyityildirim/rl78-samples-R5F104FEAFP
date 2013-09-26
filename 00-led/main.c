#include <iodefine.h>
#include <iodefine_ext.h>

int main (void)
{
    PM1 &= ~(1 << 5);                                       /* Make P15 an output */
    POM1 &= ~(1 << 5);                                      /* Make P15 a CMOS output */
    P1 |= (1 << 5);                                         /* Set P15 high: light LED */
    for (;;);
}
