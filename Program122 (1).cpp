#include<iostream>

using namespace std;

class Arithematic
{
public:                             // Access specifier
    int iNo1,iNo2;              // Charcteristics
    Arithematic(int x, int y)   // Constructor
    {
        iNo1 = x;
        iNo2 = y;
    }
    int Addition()              // Behaviour
    {
        int iResult = 0;
        iResult = iNo1 + iNo2;
        return iResult;
    }
    int Substraction()      // Behaviour
    {
        int iResult = 0;
        iResult = iNo1 - iNo2;
        return iResult;
    }
};
int main()
{
    int iRet1 = 0, iRet2 = 0;
    Arithematic obj1(10,11);        // Object Creation
    Arithematic obj2(20,15);
    
    iRet1 = obj1.Addition();
    cout<<"Additon is :"<<iRet1<<"\n";
    
    iRet2 = obj2.Substraction();
    cout<<"Substraction is : "<<iRet2<<"\n";
    
    return 0;
}






















