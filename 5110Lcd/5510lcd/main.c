/*
 * Muhammet Tayyip Çankaya 
 */


#include <stdint.h>
#include <stdbool.h>
#include "driverlib/sysctl.h"
#include "Nokia5110.h"
#include "bitmapPhotos.h"



int main (void)
{

    Nokia5110_Init();
    SysCtlClockSet(SYSCTL_SYSDIV_1 | SYSCTL_USE_PLL | SYSCTL_OSC_INT | SYSCTL_XTAL_16MHZ);

    Nokia5110_Clear();


    while(1){
        Nokia5110_DrawFullImage(sunshine);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(marrow);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(apple);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(owl);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(toy);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(toyBear);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(plane);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(lego);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(rocket);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(superman);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(batman);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(panda);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(git);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(turkiye);
        SysCtlDelay(SysCtlClockGet());

        Nokia5110_DrawFullImage(einstein);
        SysCtlDelay(SysCtlClockGet());

    }

    /*Nokia5110_Clear();
    Nokia5110_SetCursor(0, 0);
    Nokia5110_OutString("MUHAMMET");

    Nokia5110_SetCursor(0, 1);
    Nokia5110_OutString("TAYYIP");

    Nokia5110_SetCursor(0, 2);
    Nokia5110_OutString("CANKAYA");*/

}
