#include <iostream>

using namespace std;

class clsCalculator {
private:
    float _Result = 0;
    float _LastNumberAction;
    string _LastAction;

public:

    void Clear()
    {
        _Result = 0;
        _LastAction = "Clearing";
    }

    void Add(float Number)
    {
        _Result += Number;
        _LastNumberAction = Number;
        _LastAction = "Adding";
    }

    void Subtract(float Number)
    {
        _Result -= Number;
        _LastNumberAction = Number;
        _LastAction = "Subtracting";
    }


    void Multiply(float Number)
    {
        _Result *= Number;
        _LastNumberAction = Number;
        _LastAction = "Multiplying";
    }

    void Divide(float Number)
    {
        if (Number == 0) { Number = 1; }

        _Result /= Number;
        _LastNumberAction = Number;
        _LastAction = "Dividing";
    }

    void PrintResult()
    {
        cout << "Result After " << _LastAction << " " << _LastNumberAction << " is: " << _Result << endl;
    }

    int ReturnResult()
    {
        return _Result;
    }
};

int main()
{
    clsCalculator Calculator;

    Calculator.Add(10);
    Calculator.PrintResult();

    Calculator.Add(100);
    Calculator.PrintResult();

    Calculator.Subtract(20);
    Calculator.PrintResult();

    Calculator.Divide(0);
    Calculator.PrintResult();

    Calculator.Multiply(3);
    Calculator.PrintResult();

    Calculator.Clear();
    Calculator.PrintResult();

    system("pause>0");
    return 0;
}

