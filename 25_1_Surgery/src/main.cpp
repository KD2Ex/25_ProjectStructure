#include <iostream>
#include "../include/surgery.h"
using namespace std;

#define SCALPEL 1
#define HEMOSTAT 2
#define TWEEZERS 3
#define SUTURE 4

#define SCALPEL_NAME "scalpel"
#define HEMOSTAT_NAME "hemostat"
#define TWEEZERS_NAME "tweezers"
#define SUTURE_NAME "suture"

int main() {

    string command;
    cin >> command;
//
//    switch (condition) {
//
//    }

    coordinates startingPoint{};
    coordinates endingPoint{};

    startingPoint.input();
    endingPoint.input();

    scalpel(startingPoint, endingPoint);

    startingPoint.print();
    endingPoint.print();

}

