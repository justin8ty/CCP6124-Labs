#include <iostream>

class AbstractSeq
{
public:
    virtual int fun(int k) = 0;
    void printSeq(int k, int m)
    {
        for (int i = k; i <= m; ++i)
        {
            std::cout << fun(i) << " ";
        }
        std::cout << std::endl;
    }

    int sumSeq(int k, int m)
    {
        int sum = 0;
        for (int i = k; i <= m; ++i)
        {
            sum += fun(i);
        }
        return sum;
    }
};

class OddSeq : public AbstractSeq
{
public:
    int fun(int k) override
    {
        return 2 * k - 1;
    }
};

class SquareSeq : public AbstractSeq
{
public:
    int fun(int k) override
    {
        return k * k;
    }
};

int main()
{
    OddSeq oddSeq;
    SquareSeq squareSeq;

    std::cout << "Printing odd sequence from 1 to 5: ";
    oddSeq.printSeq(1, 5);
    std::cout << "Sum of odd sequence from 1 to 5: " << oddSeq.sumSeq(1, 5) << std::endl;

    std::cout << "Printing square sequence from 1 to 5: ";
    squareSeq.printSeq(1, 5);
    std::cout << "Sum of square sequence from 1 to 5: " << squareSeq.sumSeq(1, 5) << std::endl;

    return 0;
}
