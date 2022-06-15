#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <iostream>
using namespace sol235;
using namespace std;

/*takeaways
  - build a trie tree
  - pay attention to the exit condition
    of the _search method
  - Time complexity: O(n*l)

*/
WordDictionary::WordDictionary()
{
  trieNode = new Node();
}
void WordDictionary::addWord(string word)
{
  auto p = trieNode;
  for (auto c : word)
  {
    auto idx = c - 'a';
    if (p->chars[idx] == nullptr)
      p->chars[idx] = new Node();
    p = p->chars[idx];
  }
  p->isWord = true;
}

bool WordDictionary::_search(string &s, Node *root, int indx)
{
  /* this is the key
     - it can handle the case where the
       very last char of s is a dot nicely
     - in this case the root still pointing
       to the very last char of the s
  */
  if (indx == s.size())
    return root->isWord;

  auto c = s[indx];
  if (c == '.')
  {
    /* any one of these would do */
    for (auto node : root->chars)
      if (node != nullptr && _search(s, node, indx + 1))
        return true;
    return false;
  }

  return root->chars[c - 'a'] != nullptr && _search(s, root->chars[c - 'a'], indx + 1);
}

bool WordDictionary::search(string word)
{
  return _search(word, trieNode, 0);
}