#if !defined(ItemH)
#define ItemH

#include <string>
using namespace std;

class Item
{
public:
	Item();
	Item(string, double, string);
	string GetName() const;
	double GetPrice() const;
	string GetDiscount() const;

private:
	string name_;
	double price_;
	string discount_;
};

#endif
