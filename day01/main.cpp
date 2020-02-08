#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream myfile;
    myfile.open("input.txt");
    string line;
    int res = 0;

    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            int y = stoi(line); 
            y = (y/3) - 2;
            cout<< "Y IS : " << y << endl;
            res += y;
            cout<< "Result is : " << res << endl;
        }
        myfile.close();
    }

    cout << res;
    
    return 0;
}
