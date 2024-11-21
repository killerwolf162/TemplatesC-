#include <iostream>
#include "vectorQueue.h"

template<typename T>
T* Sort(T myArray[])
{
    int n = sizeof(myArray);

    for (int i = 0; i < n; i++)
    {
        if (myArray[i] < myArray[1 + i])
        {
            myArray[i] = myArray[1 + i];
        }
        else if (myArray[i] > myArray[1 + i])
        {
            myArray[1 + i] = myArray[i];
        }
    }
    return myArray;
}

int main() 
{
    int myIntArray[5] = { 2,4,1,3,5};
    int *mySortedIntArray = Sort(myIntArray);

    std::cout << mySortedIntArray[0] << " , " << mySortedIntArray[1] << " , " << mySortedIntArray[2] << " , " << mySortedIntArray[3] << " , " << mySortedIntArray[4] << std::endl;

    std::string myStringArray[5] = { "drie" , "twee" , "een" , "vier" , "vijf" };
    std::string* mySortedStringArray = Sort(myStringArray);

    std::cout << mySortedStringArray[0] << " , " << mySortedStringArray[1] << " , " << mySortedStringArray[2] << " , " << mySortedStringArray[3] << " , " << mySortedStringArray[4] << std::endl;
    
    vectorQueue<int> intQueue;
    for (int i : {4, 2, 3, 1, 5, 6})
    {
        intQueue.put(i);
    }

    std::cout << "first element in queue: " << intQueue.get() << " , " << "Queue size: " << intQueue.vectorQueueSize() << std::endl;

    vectorQueue<std::string> stringQueue{};
    for (std::string s : {"aap", "noot", "mies"})
    {
        stringQueue.put(s);
    }

    std::cout.precision(20);
    std::cout << "first element in queue: " << stringQueue.get() << " , " << "Queue size: " << stringQueue.vectorQueueSize() << std::endl;

}




// Maak één template-functie die array's kan sorteren:
//  Een array van std::strings
//  Een array van floats
//
// Maak een template - class die zich als een queue gedraagt :
//  put() : voegt een element toe aan 't einde
//  get() : haalt een element op van t begin
//  size() : toont aantal elementen


