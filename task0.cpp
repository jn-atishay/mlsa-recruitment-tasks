#include <iostream>

#include <vector>



int main()
{
	
int n;
std::vector<int> a, b, c;

	
std::cin >> n;


for (int i = 0; i < n; i++)
{
		
int val;
	
std::cin >> val;
	
a.push_back(val);

}


for (int i = 0; i < n; i++)
{
	
int val;

std::cin >> val;

b.push_back(val);

}


for (int i = 0; i < n;
i++)
{

c.push_back(b[i] - a[i]);

}


int numDiff = 0;


for (int i = 0; i < n - 1; i++)
{
	
if (c[i] != c[i + 1])
{
	
numDiff++;

}

}


if (numDiff > 2)
{

std::cout << "NO\n";

}

else
{

std::cout << "YES\n";
	
}

}