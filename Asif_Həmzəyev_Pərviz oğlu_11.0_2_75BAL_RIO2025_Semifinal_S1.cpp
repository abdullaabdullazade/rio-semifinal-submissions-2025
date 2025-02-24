/*#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a;
    priority_queue<long long>p;
    for(int i=0;i<a;i++){
        cin>>b;
        p.push(b);
    }
    cout<<p.top()<<endl;

}
*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a;
    stack<long long>s;
    for(int i=0;i<a;i++){
        cin>>b;
        s.push(b);
    }
    s.pop();cout<<s.top();

}
*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b=a;
    reverse(b.begin(),b.end());
    if(a==b){
        cout<<"True"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }

}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  a,b;
    string c,d;
    cin>>a>>b;
    for(long long  i=a;i<=b;i++){
        c = to_string(i);
        d=c;
        reverse(c.begin(),c.end());
        if(c==d){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b;
    long long v[a*b];
    for(int i=0;i<a*b;i++){
        cin>>v[i];
    }

}*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b;
    cin>>a;
    vector<long long>v;
    for(int i=0;i<a;i++){
        cin>>b;

    }
}
*/
