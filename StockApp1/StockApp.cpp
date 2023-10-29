#include<iostream>
#include "stock00.h"

int main() {
    Stock singh;
    singh.acquire("MSI", 20, 12.50);
    singh.show();

    singh.buy(15, 18.5);
    singh.show();

    singh.sell(400, 20);
    singh.show();

    singh.buy(300000, 40.125);
    singh.show();

    singh.sell(130000, 0.125);
    singh.show();

    cout << "Hello Fakir";
    return 0;
}