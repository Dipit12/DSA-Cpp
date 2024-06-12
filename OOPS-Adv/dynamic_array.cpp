// in a dynamic array we dont need to specify the size while declaring the array unlike in a normal array

#include <iostream>
using namespace std;

class DynamicArray{
private:
    int *data;
    int nextIndex;
    int capacity; // total capacity of the array
public:
    DynamicArray() {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    void add(int element) {
        if(nextIndex == capacity) {
            int *newData = new int[2*capacity];
            // now we have to copy the old content

            for(int i=0;i<capacity;i++) {
                newData[i]=data[i];
            }
            // now we have to deallocate the memory of the old array
            delete []data; // if we don't delete it, would lead to memory leak
            data = newData;
            capacity = capacity *2;
        }
        else {
            data[nextIndex] = element;
            nextIndex++;
        }
    }

    int get(int i) {
        if(i>=0 && i<nextIndex) {
            return data[i];
        }
        else {
            return -1;
        }
    }
};