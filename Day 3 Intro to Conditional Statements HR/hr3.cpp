#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if (N%2 != 0){
        cout<<"Weird";
        cout<<endl;
    }
  
    else if(N%2 ==0 && (N>=2 && N<=5) ){
        cout<<"Weird";
        cout<<endl;
    }
     else if(N%2==0 && (N>=6 && N<=20) ){
        cout<<"NotWeird";
        cout<<endl;
    }
    else{
        cout<<"NotWeird";
        cout<<endl;
    }

    return 0;
}

