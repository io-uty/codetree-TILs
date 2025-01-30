#include <iostream>
#include <string>
#include <list>

using namespace std;

int n, m;
string s;
list<char> s2;
int main() {
    cin >> n >> m;
    cin >> s;
    
    s2.assign(s.begin(), s.end());

    list<char>::iterator it = s2.end();

    for (int i = 0; i < m; i++) {
        char command;
        cin >> command;
        if(command=='L'){
            if(it!=s2.begin()) it--;
        }else if(command=='R'){
            if(it!=s2.end()) it++;
        }else if(command=='D'){
            if(it!=s2.end()){
                it=s2.erase(it);
            }
        }
        else if (command == 'P') {
            char c;
            cin >> c;
            s2.insert(it,c);
        }
        
    }
    for(auto s:s2){
        cout << s ;
    }



    return 0;
}
