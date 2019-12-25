// Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Node
{
protected:
    int x;
    int y;
    int z;
public:
    //Node() {}
    Node(int x, int y) : x(x), y(y)
    {
        std::cout << "Node created" << x <<y << std::endl;

    }
    Node(int x, int y, int z) : x(x), y(y) , z(z) // overloading
   {
        std::cout << "Node created" << x << y << z << std::endl;

    }
    //virtual int add()
    //{
    //    return x + y;
    //}

};
class Vertices : public Node
{
public:
    Vertices() {}
    int add()
    {
        return x + y + 0;
    }

};
int main()
{

    //Node nd(10,10);
    int*  a;
    int b;
    *a = 10;
    a = &b;
    int* c = new int;
    *c = 10;
    std::cout << "Hello World!\n" << a << std::endl;
    return 0;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
