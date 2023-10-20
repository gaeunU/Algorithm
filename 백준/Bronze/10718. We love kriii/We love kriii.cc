#include <iostream>

using namespace std;


int main(int argc, const char* argv[]) {

    ios_base::sync_with_stdio(false);

 // FILE* p_file = NULL;
 // freopen_s(&p_file,"input.txt", "rt", stdin);

    string s1 = "강한친구";
    string s2 = "대한육군";
    
    for (int i = 0; i < 2; i++) {
        cout << s1 << " " << s2 << '\n';
    }

    return 0;
}