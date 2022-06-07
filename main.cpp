#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol235;

/*
addWord("bad")
addWord("dad")
addWord("mad")
search("pad") -> false
search("bad") -> true
search(".ad") -> true
search("b..") -> true
*/

void test1()
{
  WordDictionary dict;
  dict.addWord("bad");
  dict.addWord("dad");
  dict.addWord("mad");

  cout << "Expect to see 0: " << dict.search("pad") << endl;
  cout << "Expect to see 1: " << dict.search("bad") << endl;
  cout << "Expect to see 1: " << dict.search(".ad") << endl;
  cout << "Expect to see 1: " << dict.search("b..") << endl;
}

main()
{
  test1();
}