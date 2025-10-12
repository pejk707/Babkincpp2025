//ploshad kvadrata//
#include <iostream>

using namespace std;

int main()
{
  float storona;
  cout << "Vvedite storony kvadrata = ";
  cin >> storona;
  cout << "Ploshad vashego kvadrata = " << storona * storona << endl;
  return 0;
}
//ploshad trapecii//
#include <iostream>

using namespace std;

int main()
{
  float h, a, b;
  cout << "Vvedite visoty = ";
  cin >> h;
  cout << "Vvedite pervyu storony = ";
  cin >> a;
  cout << "Vvedite vtoryu storony = ";
  cin >> b;
  cout << "Ploshad trapecii = " << (0.5 * (a + b)) * h << endl;
  return 0;
}
