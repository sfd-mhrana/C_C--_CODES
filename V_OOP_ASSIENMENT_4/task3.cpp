#include <iostream>
#include <string>

using namespace std;

class Color
{
private:
    string color;

public:
    Color(string color1, string color2)
    {
        if (color1 == "Invalid")
        {
            color = color2;
        }
        else
        {
            if (color1 == "red" && color2 == "yellow")
            {
                color = "Orange";
            }
            else if (color1 == "red" && color2 == "blue")
            {
                color = "Violet";
            }
            else if (color1 == "yellow" && color2 == "blue")
            {
                color = "Green";
            }
            else if (color1 == "blue" && color2 == "yellow")
            {
                color = "Green";
            }
            else if (color1 == "yellow" && color2 == "red")
            {
                color = "Orange";
            }
            else if (color1 == "blue" && color2 == "red")
            {
                color = "Violet";
            }
            else
            {
                color = "Invalid";
            }
        }
    }

    string getColor() { return color; }

    Color operator+(Color &other)
    {
        return Color(color, other.color);
    }
};

Color readColor()
{
    string input;
    cin >> input;
    return Color("Invalid", input);
}

int main()
{
    Color C1 = readColor();
    Color C2 = readColor();
    Color C3 = C1 + C2;

    cout << "Color formed: " << C3.getColor() << endl;

    return 0;
}
