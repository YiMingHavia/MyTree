#include "my_tree.h"

CNode::CNode(){}

CNode::~CNode(){}

int
CNode::sum(){

}

int
CNode::depth(){

}

void
CNode::level_traverse(CNode* root, std::vector<CNode*> &nodeList){
    int node_num = root->sum();

    nodeList[0] = root;
    int i=1, k=0;
    while (i<node_num)
    {
        CNode* ptrNode = nodeList[k++];
        for(int j=0;j<ptrNode->m_NodeList.size();j++){
            nodeList[i++] = ptrNode->m_NodeList[j];
        }
        
    }

    // test
    for(int j=0;j<node_num;j++){
        std::cout<< "nodeList[i]: "<<i<<" "<<nodeList[j] <<std::endl;
    }
    
}
