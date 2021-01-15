#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long n;
    cin>>n;
    
    map<string,long>p_book;
    string name;
    long p_no;
    
    for(long i=0 ; i<n ; i++){
        cin>>name>>p_no;
        p_book[name]= p_no;
    }
    while(cin>>name){
    if(p_book.find(name) !=p_book.end())
    {
        cout<<name<<"="<<p_book.find(name)->second<<"\n";
    }
    else{
        cout<<"Not found"<<"\n";
    }   }
    return 0;
}