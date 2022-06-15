#include <iostream>

using namespace std;

class copycons
{
    int value;

public:
    copycons(int a)
    {
        value = a;
    }
    copycons(copycons &obj)
    {
        value = obj.value;
    }
    void display()
    {
        cout << "The value of c is " << value << endl;
    }
};
int main()
{
    copycons c(10);
    copycons c1(c);
    c1.display();
    return 0;
}
/*If we comment out the (copycons &obj){
    value = obj.value;
}
Then also the porgram will run that is because the compiler supplies the copy constructor
 by itself it it doesnot find one in the porgram*/
