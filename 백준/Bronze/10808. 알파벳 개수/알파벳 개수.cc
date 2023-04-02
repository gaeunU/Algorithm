#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    vector<int> ans(26);
    cin>>s;
    
    for(int i=0; i<s.size(); i++){
		ans[s.at(i)-97]++;
	}
	
		
	for(int i=0; i<26; i++){
		cout << ans[i] <<" ";
	}
	
    return 0;
}