#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(int i=0; i<myString.size(); i++){
        if(myString[i] == 'a')
            myString[i] -= 32;
        else if(myString[i]<91 && myString[i]!='A'&&myString[i] != 32)
            myString[i] += 32;
    }
    answer = myString;
    return answer;
}