#include <iostream>
using namespace std;
int a, n, ans=1;
void power( int a, int n )
{

  if (  n==0 )
  {
    cout<<ans;exit(0);
  }
  if ( n%2==0 )
  {
    a*=a;
    n/=2;
  }
  if ( n%2!=0 )
  {
    ans*=a;
    n--;
  }
  power( a, n );
}
int main()
{
  cin>>a>>n;
  power( a, n );
  return 0;
}
