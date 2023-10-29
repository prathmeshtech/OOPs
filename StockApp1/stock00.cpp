#include<iostream>
#include "stock00.h"
using namespace std;

void Stock::acquire(const string& co, long n, double pr) {
    company = co;
    if (n < 0) {
        cout << "Number of shares cant be negative" << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;

    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price) {
    if (num < 0) {
        cout << "Number of shares cant be negative. " << "TRANSACTION ABORTED.\n";
    }
    else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    if (num < 0) {
        cout << "Number of shares cant be negative. " << "TRANSACTION ABORTED.\n";
    }
    else if (num > shares) {
        cout << "Aukaat me rehhhh!!! " << "TRANSACTION ABORTED..\n";
    }
    else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() {
    cout << "Company: " << company << " Shares: " << shares << '\n';
    cout << "Share Price: Rs " << share_val << " Total worth: Rs " << total_val << '\n';
}

