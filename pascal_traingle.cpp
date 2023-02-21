#include<iostream>

using namespace std;

int fact(int n){
    int fact1 = 1;
    for(int i = 1;i<=n;i++){
        fact1*=i;
    }
    return fact1;
}
int main()
{
    int n;
    cout<<"enter the rows\n";
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i>=j){
            int c = (fact(i))/(fact(j) * fact(i-j));
            cout<<c<<" ";
            
            }
            
        }
        cout<<endl;
    }

    return 0;
}
