# include <iostream>
#include "Tasks.h"

using namespace std;

int FirstTask(unsigned int n ){
    return (1 << n);
}

int SecondTask(unsigned int n){
    unsigned int res = 0;
    int base = 1;
    for (int i = 0; i < 16; i++) {
        res = res + (1 & n) * base;
        n = n >> 1;
        base = base * 10;
    }
    return res;
}

int ThirdTask( unsigned int n){
    int counter = 0;
    for (int i = 0; i < 16; i++) {
        if (1 & n){
            counter++;
        }
        n = n >> 1;
    }
    return counter;
}

int FourthTask( unsigned int n){
    int counter = 0;
    for (int i = 0; i < 16; i++) {
        if (1 & n){
            counter = i;
        }
        n = n >> 1;
    }
    return counter;
}

int FifthTask( unsigned int n, int i){
    int res = n;
    if (i>15 || i<0) {
        return -1;
    }
    if (((n>>i) & 1) == 0) {
        res = n + (1 << i);
    }
    return res;
}

int SixthTask( unsigned int n, int i){
    int res = n;
    if (i>15 || i<0) {
        return -1;
    }
    if (((n>>i) & 1) == 1) {
        res = n - (1 << i);
    }
    return res;
}

int SeventhTask( unsigned int n, int i){
    if (i>15 || i<0) {
        return -1;
    }
    int res = n^(1 << i);

    return res;
}

int EighthTask(unsigned int n) {
    unsigned int res = n << 1;
    int counter = 0;
    while (n > 1) {
        counter++;
        n = n/2;
    }
    n = ~(res + 1) ;
    n = n + (1 << (counter + 1));
    return ~n;
}

int NinthTask(unsigned int n) {
    int counter = 0;
    int res = 0;
    for (int i = 0; i < 16; i++) {
        if (1 & n){
            counter++;
        } else {
            counter = 0;
        }
        if (counter == 2) {
            res++;
            counter = 1;
        }
        n = n >> 1;
    }
    return res;
}

int TenthTask(unsigned int n, int fir, int sec){
    if ((fir>15 || fir<0) || (sec>15 || sec<0)) {
        return -1;
    }
    int res = n;
    if (((n >> fir) & 1) != ((n >> sec) & 1)) {
        if (fir < sec){
            res = n^(1 << fir);
            res = res^(1 << sec);
        } else {
            res = n^(1 << sec);
            res = res^(1 << fir);
        }
    }
    return res;
}

int EleventhTask(unsigned int n, int i){
    int counter = 0;
    int res = n;
    while (n > 1) {
        counter++;
        n = n/2;
    }
    n = res;
    res = 0;
    int base = 1;
    for (int j = 0; j <= counter; j++) {
        if (j != i) {
            res = res + (1 & n) * base;
            base = base * 2;
        }
        n = n >> 1;
    }
    return res;
}
