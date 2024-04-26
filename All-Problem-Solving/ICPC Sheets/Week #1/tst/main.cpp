#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, co , cj , cd ;
    string s ;
    cin >> t ;

    for (int i = 1 ; i <= t ; i++){
        cin >> s ;
        co = cj = cd = 0;
        for(int i = 0 ; i <= s.length()-1 ; i++){
            if(s[i] == 'j'){
                cj = i;
                cout<<"cj " << cj << endl;
                break;

            }
        }
        for(int i = 0 ; i <= s.length()-1 ; i++){
            if(s[i] == '-'){
                if(cj - i <= cj - cd)
                    cd = i;
                co++;
            }
            cout<<"cd " << cd <<endl;
        }
        if(co == 0)
            cout << -1 <<endl;
        else if (co == s.length()-1)
            cout << 0 <<endl;
        else{
            if(cj >= cd)
                cout <<cj-cd <<endl;
            else
                cout <<cd-cj<<endl;
        }
    }


    return 0;
}
