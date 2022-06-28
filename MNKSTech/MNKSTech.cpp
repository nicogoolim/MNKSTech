#include <iostream>
#include <vector>
int main()
{
    std::vector<int> x = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    std::vector<int> y = { 10, 11, 11, 11, 11, 10, 11, 11, 11, 11, 10};
    int n = 3;
    int count = 1;
    for (int i = 0; i < x.size(); i++)
    {
        if (y[i] != 0) {
            std::cout << "(" << x[i] << ", " << y[i] << ")" << std::endl;
        }
    }
    std::cout << std::endl;
    for (int  i = 0; i < x.size()-1; i++)
    {
        if (y[i]==y[i+1] && y[i]!=0 )
        {
            count = 1;
            for (int j = i+1; j < x.size()-1; j++)
            {
                if (y[i]==y[j])
                {
                    count++;
                    if ( y[i] != y[j + 1])
                    {
                        i = i + count;
                        break;
                    }
                    else if (count % n != 0)
                    {
                        y[j] = 0;
                    }
                    else {
                        count = 1;
                    }
                }
            }
        }
    }
    for (int i = 0; i < x.size(); i++)
    {
        if (y[i] != 0) {
            std::cout << "(" << x[i] << ", " << y[i] << ")" << std::endl;
        }
    }
}
