#include <bits/stdc++.h>
using namespace std;

// It's good practice to use the std:: prefix (e.g., std::cout, std::vector)
// instead of `using namespace std;` in larger projects to avoid name collisions.

void explainPair()
{
  pair<int, string> student = {101, "Avanish"};

  cout << "Pair->first: " << student.first << "\nPair->second: " << student.second << endl;
}

void explainVector()
{
  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.emplace_back(0); // same as push_back

  // iterators
  // vec.begin() points to the mem location pointing to first element of vector/ start of vector
  // vec.end() points to the mem location NOT THE LAST ELEMENT OF VECTOR,
  //           BUT THE MEM LOCATION AFTER THE LAST ELEMENT OF VECTOR/END OF VECTOR

  vector<int>::iterator beginItr = vec.begin();
  cout << "beginItr: " << static_cast<const void *>(&*beginItr) << "\n Value present in beginItr: " << *beginItr << endl;
  vector<int>::iterator endItr = vec.end();
  cout << "endItr: " << static_cast<const void *>(&*endItr) << "\n Value present in endItr: " << *endItr << endl;

  for (vector<int>::iterator i = beginItr; i < endItr; i++)
  {
    cout << *i << " ";
  }
  cout << endl;
  for (auto i : vec)
  {
    cout << i << " ";
  }
  cout << endl;
  for (auto i = beginItr; i < endItr; i++)
  {
    cout << *i << " ";
  }
  // Done till 1:16:26;
  // testing
};

int main()
{
  explainVector();
  return 0;
}