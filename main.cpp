#include "factory.hpp"
#include "product.hpp"

int main()
{
    auto p1 = Factory::instance().create("Product1");
    p1->printMessage();
    auto p2 = Factory::instance().create("Product2");
    p2->printMessage();

    return 0;
}
