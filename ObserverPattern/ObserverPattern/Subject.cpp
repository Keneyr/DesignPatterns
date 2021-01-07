#include "Subject.h"

int Subject::getState()
{
    return state;
}
void Subject::setState(int state)
{
    this->state = state;
    notifyAllObservers();
}
void Subject::attach(Observer& observer)
{
    observers.push_back(&observer);
}
void Subject::notifyAllObservers()
{
    //�����б���Ŀǰ����֪Ϊɶ�����Ͽ�..
    //for_each(observers.begin(), observers.end(), Update);
    /*vector<Observer*>::iterator it;
    for(it = observers.begin();it != observers.end();it++)
    {
        (*it).Update();
    }*/
}

void Update(Observer& observer)
{
    observer.Update();
}