#include "factory.hpp"
#include "product_maker_base.hpp"
#include "product.hpp"

Factory::Factory()
{}

Factory& Factory::instance()
{
    static Factory factory;
    return factory;
}

void Factory::registerMaker(const std::string& name, ProductMakerBase* maker)
{
    makers_[name] = maker;
}

std::unique_ptr<Product> Factory::create(const std::string& name)
{
    return makers_[name]->create();
}


