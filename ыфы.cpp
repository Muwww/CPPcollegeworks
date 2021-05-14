#include <iostream>
 
using namespace std;
 
int main()
{
     int desit,i,dvoich;
    i = 2;
      cout << "Vvedite chislo: ";
       cin >> desit;
      int dvo[200];
     int t =0;
    while(desit>1)
    {
       dvoich= desit%i;
       dvo[t] =dvoich;
       desit/=i;
       t++;
    }
    t--;
       cout << "Dvoichnoe: ";
       cout << 1;
    while(t>=0)
    {
        cout << dvo[t];
        t--;
    }
        cout <<endl;
    return main();
}