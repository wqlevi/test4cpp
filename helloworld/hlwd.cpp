#include <iostream>
#include <string>

using namespace std;

string func_str(string str)
{
    if (str.length() < 25 && str.length() > 4)
    {
        for (int i=0 ; i < str.length() ; i++)
        {
            if (i == 0)
            {
                if ((str[0]<= 90 && str[0]>=65) || (str[0]<= 122 && str[0]>=97)) str="true";
             //   else {str ="false";break;}
                else str = "false";
            }
            cout << str[str.length()-1];
        }
    }
    return str;
}
int main()
{
    string new_str = "0elloworld";
    cout << func_str(new_str);
    cout << new_str[new_str.length()-1];
    return 0;
}
