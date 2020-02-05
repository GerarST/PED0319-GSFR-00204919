#include <iostream>
#include <string>
using namespace std;

struct node{
    string word;
    node* left,* right;
};

int main(){
    node* pTree = NULL;
    
    insertInTree(&pTree, "Hola");
    insertInTree(&pTree, "xdd");
    insertInTree(&pTree, "bai");
    insertInTree(&pTree, "efes");
    insertInTree(&pTree, "tuprima");

    return 0;
}

node* createLeaf(string word){
    node* leaf = new node;
    leaf->word = word;
    leaf->left = NULL;
    leaf->right = NULL;

    return leaf;
}

void insertInTree(node** pTree, string word){
    if(!pTree)
        *pTree = createLeaf(word);
    else{
        if(word.compare((*(*pTree)).word) <= 0)
            insertInTree(&(*(*pTree)).left, word);
        else
            insertInTree(&(*(*pTree)).right, word);
        
    }
}
// insertar nombre apellido y dui, ordenar por apellido.