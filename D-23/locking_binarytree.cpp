#include<bits/stdc++.h>
using namespace std;

struct node{
bool lock;
struct node* left;
struct node* right;
struct node* parent;
};

bool islocked(struct node* n){

return node->lock;
}

bool lock(struct node* n){
if (!check_precondition(n)){
    return false;
}
node->lock =true;
return true;
}

bool unlock(struct node* n)
{
    if (!check_precondition(n)){
        return false; 
    }
    node->lock=false;
    return true;
}

bool check_precondition(struct node* n){

bool left= checkchild_precondition(node->left);
if (!left){
    return false;
}

bool right =checkchild_precondition(node->right);
if (!right){
    return false;
}

// to check ancestors

struct node* parent =node->parent;
while(parent !=NULL){
    if (parent->lock){
        return false;
    }
    parent=node->parent;
    
}
return true;
}

bool checkchild_precondition(struct node* n){
if (n==NULL){
    return true;
}
if (n->lock){
    return false;
}

bool left =checkchild_precondition(n->left);
if (!left){
    return fasle;
}
bool right =checkchild_precondition(n->right);
return right;
}
