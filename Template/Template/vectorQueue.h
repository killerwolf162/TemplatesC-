#pragma once

#include <vector>
#include <iostream>

template<typename T>
class vectorQueue 
{
public:
    vectorQueue() {}

    void put(T element) 
    {
        elements.push_back(element);
    }
    T get()
    {
        return elements.front();
    }

    int vectorQueueSize() 
    {
        return elements.size();
    }

private:
    std::vector<T> elements;
};
