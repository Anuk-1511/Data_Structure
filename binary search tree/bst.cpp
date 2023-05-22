#include<iostream>
#include<queue>
using namespace std;
class node{
   public:
   int data;
   node* left;
   node* right;

    node(int val){
         this->data = val;
         this->left = NULL;
         this->right = NULL;
    }
};
int tree_height(node* root) {
    // Get the height of the tree
    if (!root)
        return 0;
    else {
        
        int left_height = tree_height(root->left);
        int right_height = tree_height(root->right);
        if (left_height >= right_height)
            return left_height + 1;
        else
            return right_height + 1;
    }
}

void print_level(node* root, int level_no) {

    if (!root)
        return;
    if (level_no == 0) {
       
        printf("%d -> ", root->data);
    }
    else {
        
        print_level(root->left, level_no - 1);
        print_level(root->right, level_no - 1);
    }

}

void print_tree_level_order(node* root) {
    if (!root)
        return;
    int height = tree_height(root);
    for (int i=0; i<height; i++) {
        printf("Level %d: ", i);
        print_level(root, i);
        printf("\n");
    }
    printf("\n\n-----Complete Level Order Traversal:-----\n");
    for (int i=0; i<height; i++) {
        print_level(root, i);
    }
    printf("\n");
}

node* inserttobst(node* root, int val){
    
    
    if(root == NULL){
        root = new node(val);
        return root;
    }
    if(val > root->data){
        
        root->right = inserttobst(root->right,val);
        
    }
    else{
        root->left = inserttobst(root->left,val);
    }
    
    return root;
}
void takeInput(node* &root){
    int data;
    cin>>data;

    while(data != -1){
      root =  inserttobst(root,data);
       cin>>data;
    }
}

node* minv(node* root){
    node* curr = root;
    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}
node* maxv(node* root)
{
    node* curr = root;
    while(curr && curr->right != NULL){
        curr = curr->right;
    }
    return curr;
}

node* deletenode(node* root,int val)
{
    if(root == NULL){
        return NULL;
    }
    if(root->data == val)
    {
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->left == NULL && root->right != NULL){
            node* temp = root->right;
            delete root;
            return temp;
        }
        else if(root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            node* temp = minv(root->right);
            root->data = temp->data;
            root->right = deletenode(root->right,temp->data);
            return root;
        }
    }
    else if(val > root->data){
        root->right = deletenode(root->right,val);
        return root;
    }
    else{
        root->left = deletenode(root->left,val);
        return root;
    }
    
}
int main(){

    node* root = NULL;

    cout<<"Enter the node: ";
    takeInput(root);
    print_tree_level_order(root);

    cout<<"Minimum value in the tree: "<<minv(root)->data<<endl;
    cout<<"Maximum value in the tree: "<<maxv(root)->data<<endl;
    cout<<"enter the node to be deleted: ";
    int val;
    cin>>val;
    deletenode(root,val);
    print_tree_level_order(root);
    return 0;
}
