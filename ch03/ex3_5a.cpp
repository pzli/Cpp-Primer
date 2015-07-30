//read strings from the standard input, concatenating what is read into one large string. 
//Print the concatenated string.
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string concatenated;
    string buffer;
    while(cin>>buffer)
    {
        if(buffer=="q")break;
        concatenated += buffer;
    }
    cout<<concatenated<<endl;
    return 0;
}
