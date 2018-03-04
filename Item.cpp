#include "Item.h"

Item::Item()
{}

Item::Item(string name, double price, string discount) : name_(name), price_(price), discount_(discount)
{}

string Item::GetName() const
{
	return name_;
}

double Item::GetPrice() const
{
	return price_;
}

string Item::GetDiscount() const
{
	return discount_;
}