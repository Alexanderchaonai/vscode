#include<iostream>
using namespace std;
int main()
{
    const string S="Scissors";
    const string P="Paper";
    const string R="Rock";
    int turn;
    string p1,p2;
    cin>>turn;
    while(turn--)
    {
        cin>>p1>>p2;
        if(p1==S&&p2==P||p1==P&&p2==R||p1==R&&p2==S)
        cout<<"Player1"<<endl;
        else if(p1==p2)
        cout<<"Tie"<<endl;
        else
        cout<<"Player2"<<endl;
    }
    return 0;

}