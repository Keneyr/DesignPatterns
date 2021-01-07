#pragma once
#include "Observer.h"
#include <vector>
#include <algorithm>
using namespace std;

class Observer;

class Subject
{
private:
    int state;
    vector<Observer*> observers;
    //void Update(Observer& observer);

    public:
    int getState();
    void setState(int state);
    void attach(Observer& observer);
    void notifyAllObservers();
    
};
void Update(Observer& observer);