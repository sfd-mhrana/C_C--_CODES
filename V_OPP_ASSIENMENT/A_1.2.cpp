#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Calculator
{
private:
    string lastOperation;

public:
    Calculator()
    {
        cout << "Calculator is ready!" << endl;
    }
    int calculate(int a, int b, char op)
    {
        int result;
        switch (op)
        {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = static_cast<double>(a) / b;
            break;
        default:
            cout << "Invalid operation!" << endl;
            result = 0;
            break;
        }
        lastOperation = std::to_string(a) + " " + std::string(1, op) + " " + std::to_string(b) + " = " +
                        std::to_string(result);
        return result;
    }
    void showCalculation()
    {
        cout << lastOperation << endl;
    }
};
int main()
{
    Calculator c1;
    cout << "==================" << endl;
    int val = c1.calculate(10, 20, '+');
    cout << "Returned value: " << val << endl;
    c1.showCalculation();
    cout << "==================" << endl;
    val = c1.calculate(val, 10, '-');
    cout << "Returned value: " << val << endl;
    c1.showCalculation();
    cout << "==================" << endl;
    val = c1.calculate(val, 5, '*');
    cout << "Returned value: " << val << endl;
    c1.showCalculation();
    cout << "==================" << endl;
    val = c1.calculate(val, 16, '/');
    cout << "Returned value: " << fixed << setprecision(2) << val << endl;
    c1.showCalculation();
    return 0;
}