#include <iostream>
#include <list>
using namespace std;

class FrontMiddleBackQueue
{
private:
    list<int> q;

public:
    FrontMiddleBackQueue()
    {
    }

    void pushFront(int val)
    {
        q.push_front(val);
    }

    void pushMiddle(int val)
    {
        auto i = q.begin();
        advance(i, q.size() / 2);
        q.insert(i, val);
    }

    void pushBack(int val)
    {
        q.push_back(val);
    }

    int popFront()
    {
        if (q.empty())
            return -1;
        int val = q.front();
        q.pop_front();
        return val;
    }

    int popMiddle()
    {
        if (q.empty())
            return -1;
        auto i = q.begin();
        advance(i, (q.size() - 1) / 2);

        int val = *i;
        q.erase(i);

        return val;
    }

    int popBack()
    {
        if (q.empty())
            return -1;
        int val = q.back();
        q.pop_back();
        return val;
    }
};

int main()
{

    return 0;
}