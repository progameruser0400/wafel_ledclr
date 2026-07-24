#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#include <wafel/utils.h>
#include <wafel/services/fsa.h>
#include <wafel/ios/thread.h>
#include <wafel/ios/svc.h>

#include "setup.h"
#include "led.h"

void do_the_thing(){
    SetNotificationLED(NOTIF_LED_BLUE); // we change this line to match the colors in the led.h wow i'm so smart
    debug_printf("led set");
}
u32 setup_main(void* arg){
    do_the_thing();
}
