#include <iostream>

namespace Marvellous
{
    void fun()
    {
        std ::cout << "Inside  Marvellous fun\n";
    }
}
namespace infosystem
{
    void fun()
    {
        std ::cout << "Inside infosystem fun\n";
    }
}

int main()
{

    std ::cout << "Jay Ganesh..."<< "\n";

    using namespace Marvellous;
    using namespace infosystem;
    // fun();  // Ambiduity
    Marvellous::fun();

    return 0;
}