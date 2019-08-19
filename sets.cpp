#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin>>q;
    set <long long int> s;
    for(int i=0;i<q;i++)
    {
        int y;
        long long int x;
        cin>>y>>x;
        if(y==1)
            s.insert(x);
        else if(y==2)
            s.erase(x);
        else
        {
            if(s.end()==s.find(x))
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }   
    return 0;
}
/*
Input
8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6
Output
Yes 
No
No
*/
