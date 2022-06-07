#ifndef NODE_H
#define NODE_H

#include <vector>
#include <cinttypes>
using namespace std;

namespace sol235
{
    struct Node
    {
        bool isWord;
        vector<Node *> chars;
        Node() : isWord(false), chars(26, nullptr){};
    };
}
#endif