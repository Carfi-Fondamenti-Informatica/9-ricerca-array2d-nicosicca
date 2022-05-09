#include <iostream>
#include 'lib.h';
using namespace std;

int main() {
    int a;
    char nomi[10][20];
    char temp[20];

    iniz(nomi,10);
    iniz(temp,20);

    for(int i=0; i<10; i++){
        cin>>nomi[i];
    }
    cin>>temp;
    a=ricerca(nomi,temp);
    if(a!=-1)
        cout<<a;
    else
        cout<<"non presente"<<endl;

    return 0;
}
