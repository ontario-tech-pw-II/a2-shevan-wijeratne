//Shevan Wijeratne (100746742)
//CSCI1061

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream fin;
    ofstream fout;

    // check if there are enough arguments
    if (argc <= 2)
    {
        cout << "Not enough arguments passed" << endl;
    }
    if (argc == 3)
    {
        cout << "The correct amount of arguments were passed" << endl;

        char c;

        // open the first file
        fin.open(argv[1]);

        if (fin.fail()) // check if it is successful
        {
            cerr << " Cannot open the input file!" << endl;
            return 1;
        }

        // open the second file
        fout.open(argv[2]);

        if (fout.fail())
        {
            cerr << " Cannot open the output file!" << endl;
            return 1;
        }

        while (fin.get(c))
        {
            fout << c;
        }

        fin.close();

        fout.close();
    }

    return 0;
}