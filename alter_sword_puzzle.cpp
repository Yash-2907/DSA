//QUESTION IS THAT THE FIRST PERSON HAS A SWORD , AND HE KILLS THE ALIVE PERSON BESIDE HIM AND PASSES THE SWORD TO NEXT PERSON , THE LAST PERSON LEFT ALIVE IS GIVEN AS OUTPUT
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,n=0;
    cout<<"ENTER NUMBER OF PEOPLE :- ";
    cin>>num;
    while(pow(2,n)<=num)
    {
        n++;
    }
    int ans=1+((num-pow(2,n-1))*2);
    cout<<"PERSON LEFT ALIVE :- "<<ans;
    return 0;
}

//TRY ON PEN PAPER FOR TESTCASE OF PEOPLE FROM 1 TO 16 ,AND OBSERVE A PATTERN , ANSWER INCLUDE POWER AND ARITHMATIC PROGRESSION