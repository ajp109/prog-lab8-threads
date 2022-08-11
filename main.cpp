#include "mbed.h"

DigitalOut green(D2);
DigitalOut red(D3);

Thread redThread;

void redThreadFn() {
    
    // Flash the red LED here
    
}

int main() {
    
    redThread.start(redThreadFn);
    
    // Flash the green LED here
    
}
