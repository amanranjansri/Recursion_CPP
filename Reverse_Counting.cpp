#include <iostream>
using namespace std;

void count(int num)
{
    // Base condition
    if (num == 0)
    {
        return;
    }
    cout << num << endl;
    count(num - 1);
}

int main()
{
    int num = 10;

    count(num);
    return 0;
}
