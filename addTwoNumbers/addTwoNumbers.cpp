#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    list<int> l1{ 2, 4, 3 };
    list<int> l2{ 5, 6, 4 };
    list<char> l3;

    string first, second, third;

    while (l1.size())
    {
        string curr = to_string(l1.back());
        l1.pop_back();
        first += curr;
    }

    while (l2.size())
    {
        string curr = to_string(l2.back());
        l2.pop_back();
        second += curr;
    }

    int result = stoi(first) + stoi(second);
    third = to_string(result);

    for (int i = third.length() - 1; i >= 0; i--)
    {
        l3.push_back(third[i]);
    }
        
}