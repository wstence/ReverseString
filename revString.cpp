#include <iostream>
#include <string>

using namespace std;

int main()
{
  int i, j;
  string orig = "hello";
  string result = orig;
  int rsize = result.size();
  for (i = 0, j = rsize-1; i < orig.size(); i++, j--)
    result[i] = orig[j];
  cout << "Reversed string: " << result << "\n";
  return 0;
}
