#include "mbed.h"

Ticker tic;
DigitalOut led1(LED1);
DigitalOut led2(D7);

void toggle() {
    led1 = !led1;
}

int main() {
    tic.attach(&toggle, 0.1);
    while(1) {
        led2 = !led2;
        ThisThread::sleep_for(1s);
    }
}
