#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        cout << "This is an Empty String" << endl;
        return 0;
    }

    for (int i = 1; i < argc; ++i)
    {

        try
        {
            bool is_integer = true;
            for (int j = 0; j < strlen(argv[i]); ++j)
            {
                if (!isdigit(argv[i][j]))
                {
                    is_integer = false;
                    break;
                }
            }
            if (is_integer)
            {
                cout << "This is an integer" << endl;
            }
            else
            {
                float num = stof(argv[i]);
                {
                    cout << "This is an float";
                }
            }
        }
        catch (const exception &e)
        {

            if (strlen(argv[i]) == 1)
            {
                cout << "This is a Character" << endl;
            }
            else
            {
                cout << "This is a String" << endl;
            }
        }
    }

    return 0;
}
