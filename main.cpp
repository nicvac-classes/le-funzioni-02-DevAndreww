#include <iostream>
using namespace std;

int massimo(int n1, int n2)
{
   int max;
   
   if(n1>n2)
   {
       max=n1;
   }
   else
   {
       max=n2;
   }

    return max;
}

int main()

{
    int n1, n2, n3, n4, max;
    
    cout << "Inserisci 4 valori:" << endl;
    
    cin >> n1 >> n2 >> n3 >> n4;
    
    max = massimo(n1,n2);
    
    max = massimo(n2,n3);
    
    max = massimo (max,n4);
    
    cout << "Il valore massimo è " << max << endl;
    
    return 0;
}
