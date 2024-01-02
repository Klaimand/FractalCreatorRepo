
#include <iostream>
using namespace std;

void mightGoWrong()
{
    bool bError1 = false;
    bool bError2 = true;

    if (bError1)
    {
        throw "Something went wrong.";
    }
    if (bError2)
    {
        throw string("Something else went wrong.");
    }
}

void usesMightGoWrong()
{
    mightGoWrong();
}

int main()
{
    try
    {
        usesMightGoWrong();
    }
    catch (int e)
    {
        cout << "Error code : " << e << endl;
    }
    catch (char const* e)
    {
        cout << "Error message : " << e << endl;
    }
    catch (string &e)
    {
        cout << "String error message : " << e << endl;
    }

    cout << "Still running" << endl;

    return 0;
}
