#include <iostream>

using namespace std;


int n,k,answer;

int main()
{
    
    cin>>n>>k;
    
    for(int h=0;h<=n;h++){
        for(int m = 0; m<60; m++){
            for(int s = 0; s<60; s++){
                if (h % 10 == k ||h / 10 == k || m / 10 == k || m % 10 == k || s / 10 == k || s % 10 == k)
                    answer++;
            }
        }
    }
    cout<<answer;
    return 0;
}