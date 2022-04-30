#include <iostream>
#include "Stop.h"
using namespace std;
int main() {
    srand(time(NULL));
    Stop a;
    int timeStart, timeEnd, kollSitsInBus;
    cout << "Enter the start and end time of the stop test" << endl;
    cin >> timeStart >> timeEnd;

    for (int i = timeStart; i < timeEnd; i++) {
        for (int j = 1; j <= 60; j++) {

            if (j % a.timeOfBus == 0) {

                kollSitsInBus = a.sitsInBus();
                cout << a.kollPeople << "    " << kollSitsInBus << endl;

                if (kollSitsInBus >= a.kollPeople)
                    a.kollPeople = 0;
                else {
                    a.kollPeople -= kollSitsInBus;
                    a.timeOfBus--;
                }
            }

            if (j % a.timeOf_1_PeopleOnStop == 0)
                a.kollPeople++;

        }

    }
    cout << "Optimal bus arrival time " << a.timeOfBus << " min" << endl;
}