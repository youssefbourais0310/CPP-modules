
#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title) : _name(name), _title(title)
{
    std::cout<< _name<<": This looks like another boring day."<<std::endl;
}

Warlock::~Warlock()
{
    std::cout<< _name<<": My job here is done!"<<std::endl;
}

/**/
/* Warlock::Warlock(const Warlock &copy) */
/* { */
/*     std::cout << "copy constructor got called for "<<_name<<std::endl; */
/*     *this = copy; */
/* } */
/**/
/* Warlock &Warlock::operator=(const Warlock &src) */
/* { */
/*     std::cout << "asssiment operator got called for "<<_name<<std::endl; */
/*     if(this != &src) */
/*     { */
/*         this->_name = src._name; */
/*         this->_title = src._title; */
/*     } */
/*     return *this; */
/* } */
/**/

const std::string& Warlock::getTitle() const
{
    return this->_title;
}


const std::string& Warlock::getName() const
{
    return this->_name;
}


void Warlock::introduce() const
{
    std::cout << getName()<< ": I am "<< getName()<<", "<<getTitle()<<"!"<<std::endl;

}


void Warlock::setName(const std::string &str)
{
    this->_name = str;
}

void Warlock::setTitle(const std::string &str)
{
    this->_title = str;
}
