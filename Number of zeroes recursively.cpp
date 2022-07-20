#include <iostream>
#include<math.h>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string z=to_string((int)pow(11,i));
        for(int k=n-i-1;k>0;k--){cout<<" ";}
        for(int j=0;j<sizeof(z);j++){cout<<z[j]<<" ";}
        cout<<endl;
    }
	return 0;
}