#include <iostream>
using namespace std;

class DynamicIntArray
{
private:
    int* data;
    int size;

public:
    DynamicIntArray(int s)
    {
        size = s;
        data = new int[size];

        for (int i = 0 ; i < size ; i++)
        {
            data[i] = 0;
        }
    }
    ~DynamicIntArray()
    {
        delete [] data;
    }

    void set(int index, int value)
    {
        data[index] = value;
    }
    int get(int index) const
    {
        return data[index];
    }
    void print() const
    {
        for (int i = 0 ; i < size ; i++ )
        {
            if (i != size-1) {
                cout << get(i) << ", ";
            }
            else
            {
                cout << get(i) << "." << endl;
            }
        }
    }

    int getSize() const
    {
        return size;
    }

    void fill(int value)
    {
        for (int i = 0 ; i < size ; i++)
        {
            data[i] = value;
        }
    }
    int sum() const
    {
        int sum = 0;
        for (int i = 0 ; i < size ; i++)
        {
            sum = sum + data[i];
        }
        return sum;
    }

    DynamicIntArray(const DynamicIntArray& other)
    {
        size = other.size;
        data = new int[size];

        for (int i = 0 ; i < size ; i++)
        {
            data[i] = other.data[i];
        }
    }

    DynamicIntArray& operator=(const DynamicIntArray& other)
    {
        if (this == &other)
        {
            return *this;
        }
        delete []data;
        size = other.size;
        data = new int[size];
        for (int i = 0 ; i < size ; i++)
        {
            data[i] = other.data[i];
        }
        return *this;
    }
};




int main() {




    return 0;
}