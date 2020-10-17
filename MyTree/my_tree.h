#ifndef _MY_TREE_H
#define _MY_TREE_H

#include <vector>
class CNode{
public:
    std::vector<CNode*> m_NodeList;
    CNode* m_parent;
    CNode* m_nextNode;

public:
    int sum(); //节点总数
    int depth(); // 树的深度
    void level_traverse(CNode* root, std::vector<CNode*> &nodeList);
};

class my_tree
{
private:
    /* data */
public:
    my_tree(/* args */);
    ~my_tree();
};

my_tree::my_tree(/* args */)
{
}

my_tree::~my_tree()
{
}

#endif