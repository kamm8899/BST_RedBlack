
#include "bs_tree.h"
#include <list>
#include <iostream>

using namespace std;

/*
 * constructor/destructor
 */
bs_tree::bs_tree()
{
/*
 create T_nil element copied from rb tree
 */
    T_nil = new bs_tree_node();
    T_nil->p = T_nil;
    T_nil->left = T_nil;
    T_nil->right = T_nil;
    
    //root of bs tree
    T_root = T_nil;
} 

bs_tree::~bs_tree()
{
    //delete nil element and all allocated nodes copied from rb tree file
    
    remove_all(T_root);
    
    delete T_nil;

} 

void bs_tree::insert(int key, bs_tree_i_info& t_info)
{
    bs_tree_node* y;
    bs_tree_node* x;
    
    T=NIL;
    x= T.root;
    
    while( x != NIL){
        y=x;
        if(z->key < x->key){
            x =x ->left;
        }
        else if(z->key > x->key){
            z = z->y;
        }
        else
        
    }
    

}

// TODO: modified inorder tree walk method to save the 
// sorted numbers in the first argument: int* array.
// question 2
int bs_tree::convert(int* array, int n)
{
  return n;
}



