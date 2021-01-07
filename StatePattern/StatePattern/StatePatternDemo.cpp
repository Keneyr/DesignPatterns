#include "Context.h"
#include "StartState.h"
#include "StopState.h"
#include <iostream>
using namespace std;


int main()
{
    Context* context = new Context();

    StartState* startState = new StartState();
    startState->doAction(*context);
    cout << context->getState()->toString() << endl;

    StopState stopState = new StopState();
    stopState.doAction(*context);
    context->getState()->toString();

    system("pause");
    return 0;
}