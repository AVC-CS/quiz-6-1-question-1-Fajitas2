#include <iostream>
using namespace std;


int getNextPrime(int);
int getPrevPrime(int);

void getTwoValues(int& begin, int& end) {
    do {
        cout << "Enter two values : ";
        cin >> begin >> end;
        if (begin >= end) {
            cout << " try again " << endl;
        }
    } while (begin >= end);
}



int getNextPrime( int begin) 
{
    while (true) {
        if (begin <= 1) {
            ++begin;
            continue;
        }
        int div = 2;
        while (div * div <= begin) {
            if (begin % div == 0)
                break;
            ++div;
        }
        if (div * div > begin)
            return begin;
        ++begin;
    }
}

int getPrevPrime(int end) {
    while (true) {
        if (end <= 1) {
            --end;
            continue;
        }
        int div = 2;
        while (div * div <= end) {
            if (end % div == 0)
                break;
            ++div;
        }
        if (div * div > end)
            return end;
        --end;
    }
}



 
//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************
