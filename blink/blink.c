#include <p24FJ128GB206.h>
#include "config.h"
#include "common.h"
#include "ui.h"
#include "timer.h"

int16_t main(void) {
    init_clock();
    init_timer();
    init_ui();


    led_on(&led1);
    timer_setPeriod(&timer2, 0.6);
    timer_start(&timer2);


    while (1) {
        if (timer_flag(&timer2)) {
            timer_lower(&timer2);
            led_toggle(&led1);
        }
        led_write(&led2, !sw_read(&sw2));
        led_write(&led3, !sw_read(&sw3));
        if (!sw_read(&sw2)) {
            timer_setPeriod(&timer2, 0.2);
            timer_start(&timer2);
        }
        if (!sw_read(&sw3)) {
            timer_setPeriod(&timer2, 0.6);
            timer_start(&timer2);
        }
    }
}

