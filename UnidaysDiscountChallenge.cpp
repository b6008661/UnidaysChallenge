#include "UnidaysDiscountChallenge.h"

UnidaysDiscountChallenge::UnidaysDiscountChallenge()
{}

UnidaysDiscountChallenge::UnidaysDiscountChallenge(vector<Item> pricingRules) : pricingRules_(pricingRules)
{}

void UnidaysDiscountChallenge::AddToBasket(Item newItem)
{
	//add item to array of items named basket
	basket.push_back(newItem);
}

pair<double, double> UnidaysDiscountChallenge::CalculateTotalPrice()
{
	int a(0), b(0), c(0), d(0), e(0);

	//calculate the number of each items in the basket
	for (int i = 0; i < basket.size(); i++)
	{
		string name = basket.at(i).GetName();
		switch (name[0])
		{
		case 'A': a += 1;
			break;
		case 'B': b += 1;
			break;
		case 'C': c += 1;
			break;
		case 'D': d += 1;
			break;
		case 'E': e += 1;
			break;
		}
	}

	double total;
	double deliveryCharge;
	//add all discounts to basket and update total
	total = CalculateTotal_A(a);
	total += CalculateTotal_B(b);
	total += CalculateTotal_C(c);
	total += CalculateTotal_D(d);
	total += CalculateTotal_E(e);

	//calculate delivery charge
	if (total < 50)
	{
		deliveryCharge = 7;
		return make_pair(total, deliveryCharge);
	}
	else {
		deliveryCharge = 0;
		return make_pair(total, deliveryCharge);
	}
}

double UnidaysDiscountChallenge::CalculateTotal_A(int a)
{
	return a * pricingRules_.at(0).GetPrice();
}

double UnidaysDiscountChallenge::CalculateTotal_B(int b)
{
	int amount = b / 2;
	double aPrice = pricingRules_.at(1).GetPrice();
	if (b % 2 == 0)
	{
		return amount * 20;
	}
	else
	{
		return (amount * 20) + aPrice;
	}
}

double UnidaysDiscountChallenge::CalculateTotal_C(int c)
{
	int amount = c / 3;
	double bPrice = pricingRules_.at(2).GetPrice();
	if (c % 3 == 0)
	{
		return amount * 10;
	}
	else
	{
		if (c % 3 == 1)
		{
			return (amount * 10) + bPrice;
		}
		else
		{
			return (amount * 10) + (2 * bPrice);
		}
	}
}

double UnidaysDiscountChallenge::CalculateTotal_D(int d)
{
	int amount = d / 2;
	double dPrice = pricingRules_.at(3).GetPrice();
	if (d % 2 == 0)
	{
		return amount * dPrice;
	}
	else
	{
		return (amount * dPrice) + dPrice;
	}
}

double UnidaysDiscountChallenge::CalculateTotal_E(int e)
{
	int amount = e / 3;
	double ePrice = pricingRules_.at(4).GetPrice();
	if (e % 3 == 0)
	{
		return amount * 10;
	}
	else
		if (e % 3 == 1)
		{
			return (amount * 10) + ePrice;
		}
		else
		{
			return (amount * 10) + (2 * ePrice);
		}
}