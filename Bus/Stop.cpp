#include "Stop.h"
#include <iostream>
using namespace std;


Stop::Stop()
{
    inStop();
}

Stop::Stop(int endStop, int timeOf_1_PeopleOnStop, int koll_N_People)
{
}


Stop::~Stop()
{
}

void Stop::echoMenu()
{
}

void Stop::echoCorrect()
{
    cout << "Increase the frequency of the appearance of the minibus" << endl;
}

void Stop::inStop()
{
    cout << " 1 - ultimate, 0 - No ultimate" << endl;
    cin >> endStop;
    cout << "Time of appearance of one person at the bus stop in minutes" << endl;
    cin >> timeOf_1_PeopleOnStop;
    cout << "Restriction on the number of people at the stop" << endl;
    cin >> koll_N_People;
    cout << "Average time for a bus to arrive at a stop" << endl;
    cin >> timeOfBus;
}

int Stop::sitsInBus()
{
    return rand() % 15 + 0;
}