#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Button
{
private:
    unsigned int m_heigth;
    unsigned int m_width;
public:
    Button() : m_heigth(0), m_width(0)
    {

    }
    Button(unsigned int height, unsigned int width) : m_heigth(height), m_width(width)
    {

    }
    unsigned int GetHeighth()
    {
        return m_heigth;
    }
    unsigned int GetWidth()
    {
        return m_width;
    }
    virtual void Push()
    {
        cout << "Button pushed." << endl;
    }
};

class RedButton: public Button
{public:
    RedButton() : Button()
    {

    }
    RedButton(unsigned int height, unsigned int width) : Button(height,width)
    {

    }
 
    void Push()override
    {
        cout << "Red Button pushed." << endl;
    }

};
class GreenButton : public Button
{
public:
    GreenButton() : Button()
    {

    }
    GreenButton(unsigned int height, unsigned int width) : Button(height, width)
    {

    }
    void Push()override
    {
        cout << "Green Button pushed." << endl;
    }

};

class YellowButton : public Button
{
public:
    YellowButton() : Button()
    {

    }
    YellowButton(unsigned int height, unsigned int width) : Button(height, width)
    {

    }
    void Push()override
    {
        cout << "Yellow Button pushed." << endl;
    }

};


int main()
{
    RedButton red(5,10);
    cout<<"Height, red: "<<red.GetHeighth()<<endl;
    cout<<"Width, red: "<<red.GetWidth()<<endl;
    red.Push();
}


