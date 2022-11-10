#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
using namespace std;


void createArray(int *s, const int size, const int maxNum, const int minNum)
{
    int arr;
    for(int i = 0; i < size; i++)
    {
      arr = s[i] =  minNum + rand() % (maxNum - minNum + 1);
        cout << arr << " ";
    }
    cout <<endl;
}


int Sum(int *s, const int size)
{

    int S = 0;

    for(int i = 0; i < size; i++)
    
        if(!((s[i] % 2 !=0) && (i % 3 == 0)))
            S+=s[i];
    return S;

}


void countArr(int *s , const int size)
{

    int count = 0;

    for(int i = 0; i < size; i++)
    {

        if(!((s[i] % 2 !=0) && (i % 3 == 0)))
        {

            count++;
        }
    }
        cout <<endl;
        cout << "Count = " << count << endl;
}



void nullArr(int *s, const int size)
{
    for(int i = 0; i < size; i++)
    {

        if(!((s[i] % 2 !=0) && (i % 3 == 0)))
        {
            s[i] = 0;
        }

        cout << s[i] << " ";
    }
    cout << endl;
}




int main() {

    srand((unsigned)time(NULL));
    const int n = 23;
    int s[n];
    int max = 16;
    int min = 4;
    createArray(s, n, max, min);
    cout << "Sum = "<< Sum(s, n)<<endl;
    countArr(s, n);
    nullArr(s, n);


    return 0;
}




