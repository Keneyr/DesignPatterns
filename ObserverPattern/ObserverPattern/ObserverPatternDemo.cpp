#include "Subject.h"
#include "HexaObserver.h"
#include "BinaryObserver.h"
#include "OctalObserver.h"

int main()
{
    Subject* subject = new Subject();

    new HexaObserver(*subject);
    new OctalObserver(*subject);
    new BinaryObserver(*subject);

    subject->setState(15);
    subject->setState(10);

    system("pause");
    return 0;
}
