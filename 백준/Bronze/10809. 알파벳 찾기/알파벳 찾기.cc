#include <iostream>
#include <string>

using namespace std;

string k;
string alphabet = "abcdefghijklmnopqrstuvwxyz";


int main()
{
    cin>>k;
    
   for(int i=0; i<alphabet.length(); i++){
       cout << (int)k.find(alphabet[i]) << " ";
   }
    return 0;
}