#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class DynamicArray
{
public:
    DynamicArray()
    {
        size = 10;
        data = new int[size];
    }
    DynamicArray(int s) : size(s), data(new int[s]) {}
    ~DynamicArray()
    {
        delete[] data;
        data = nullptr;
        cout << "Data was destroyed" << endl;
    }

    void setValue(int x, int index)
    {
        if (index >= 0 && index < size) {
            this->data[index] = x;
        }
        else
            cout << "Error while setting value" << endl;
    }

    int getValue(int index) const
    {
        if (index >= 0 && index < size)
            return data[index];
    }
    void display() const
    {
        for (int i = 0; i < size; i++)
        {
            if (data[i])
            {
                cout << data[i] << " ";
            }
        }
        cout << endl;
    }
    int getSize() const
    {
        return size;
    }
    int* getData() const
    {
        return data;
    }

private:
    int* data;
    int size;
};

class FileHandler
{
public:
    FileHandler(const string& name)
    {
        this->name = name;
        file.open(name);
        if (!file.is_open())
        {
            cout << "Error while opnening the file";
        }
    }

    void writeLine(const DynamicArray& arr)
    {
        if (file.is_open())
        {
            int size = arr.getSize();
            for (int i = 0; i < size; i++) {
                file << arr.getValue(i) << " ";
            }
        }
        else
        {
            cout << "Unable to open file for writing" << endl;
        }
    }
    void readLine(DynamicArray& arr)
    {
        if (file.is_open())
        {
            int size;
            file >> size; // Read the size of the array
            if (arr.getData() != nullptr) {
                delete[] arr.getData();
            }
            arr.getData() = new int[size];
            size = arr.getSize();
            for (int i = 0; i < size; i++) {
                file >> arr.getValue(i);
            }
        }
        else
        {
            cout << "Unable to open file for reading" << endl;
        }
    }

    ~FileHandler()
    {
        if (file.is_open())
        {
            file.close();
            cout << "File was closed." << endl;
        }
        else
        {
            cout << "File was not open." << endl;
        }
    }
private:
    string name;
    fstream file;
};

int main()
{
    DynamicArray arr{ 5 };
    arr.setValue(99, 0);
    arr.setValue(11, 1);
    arr.setValue(12, 2);
    arr.setValue(13, 3);
    arr.setValue(14, 4);
    cout << "Array creat prin Array Constructor: " << endl;
    arr.display();
    cout << endl;

    FileHandler f("array.txt");
    f.writeLine(arr);

    cout << "Array citit din fisier: " << endl;
    f.readLine(arr);
}