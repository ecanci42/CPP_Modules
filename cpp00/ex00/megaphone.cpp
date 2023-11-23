#include <iostream>

using std::cout;
using std::endl;

typedef int integer;
typedef char string;

int main(integer ac, string **av)
{
    integer i(1), j(0);

    if (ac > 1)
    {
        while (av[i])
        {
            j = 0;
            while (av[i][j])
                cout << (string)toupper(av[i][j++]);
            i++;
        }
    }
    else
        cout <<  "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

    cout << endl;
    return (0);
}