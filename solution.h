
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol235
{
  class WordDictionary
  {
  private:
    Node *trieNode;
    bool _search(string &s, Node *root, int indx);

  public:
    WordDictionary();
    void addWord(string word);
    bool search(string word);
  };

  class Solution
  {
  private:
  public:
  };

}
#endif