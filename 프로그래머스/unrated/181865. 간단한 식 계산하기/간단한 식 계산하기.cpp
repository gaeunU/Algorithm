#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    string a,b;
    int sign = 0,idx=0;
    
    for(int i=0; i<binomial.size(); i++){
        // 숫자라면
        if(binomial[i]>47 && binomial[i]<58)
            if(idx == 0)
                a +=  binomial[i]; // 첫 숫자는 a에 저장
            else
                b += binomial[i]; // 뒷 숫자는 b에 저장
        
        else if(binomial[i] == '+') // sign 1이면 더하기 기호
            sign =1;
        else if(binomial[i] == '-') // sign 2이면 빼기 기호
            sign =2;
        else if(binomial[i] == '*') // sign 1이면 곱하기 기호
            sign =3;
        else{
            idx++;
        }   

    }
   
    if(sign == 1)
        answer = stoi(a) + stoi(b);
    else if(sign == 2)
        answer = stoi(a) - stoi(b);
    else if(sign == 3)
        answer = stoi(a) * stoi(b);
      
    return answer;
}