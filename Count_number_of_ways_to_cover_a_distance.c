#include<iostream>
using namespace std;
//returns count of ways to cover to cover 'dist'
int printCountRec(int dist)
{
    //Base cases
    if(dist<0) return 0;
    if(dist==0) return 1;
    //Recur for all previus 3 and add the results
    return printCountRec(dist-1)+printCountRec(dist-2)+printCountRec(dist-3);
}

//driver program
int main()
{
    int dist;
    scanf("%d",&dist);
    cout << printCountRec(dist);
    return 0;
}