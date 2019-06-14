#include<bits/stdc++.h>
using namespace std;
struct node{int data; node *left,*right;};

node *insert(node *root,int value){
    node *temp;
    if(root==NULL){
        temp=(node *)malloc(sizeof(node));
        temp->data=value;
        temp->left=temp->right=NULL;
        return temp;
        }
    else{
        if(value<=root->data){
            root->left=insert(root->left,value);
        }
        else{
            root->right=insert(root->right,value);
        }
    }
}
void inorder(node *root){
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(node *root){
    if(root==NULL) return;
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}

int height(node *root){
    if(root == NULL || (root->left == NULL && root->right == NULL)){
        return 0;
    }
    
    return(max(height(root->left),height(root->right))+1);
}

int depth_of_node(node *root,int value,int h){
    if(root == NULL){
        return 0;
    }
    if(root->data == value)
    return h;
    
    return(max(depth_of_node(root->left,value,h+1),depth_of_node(root->right,value,h+1)));

}

int height_of_node(node *root,int value){
    if(root == NULL){
        return 0;
    }
    if(root->data == value)
    return height(root);
    
    return(max(height_of_node(root->left,value),height_of_node(root->right,value)));

}


int main(){
    node *root=NULL;
    int value,n,temp;
    cout<<"enter the number of node \n";
    cin>>n;

    cout<<"enter the values \n";
    temp=n;
    while(temp--){
        cin>>value;
        root=insert(root,value);

    }

    cout<<"inorder traversal\n";
    inorder(root);
    cout<<endl;

    cout<<"preorder traversal\n";
    preorder(root);
    cout<<endl;

    cout<<"postorder traversal\n";
    postorder(root);
    cout<<endl;

    cout<<"height of tree\n";
    cout<<height(root);
    cout<<endl;

    cout<<"enter the node to find the depth\n";
    cin>>value;
    cout<<"depth is "<<depth_of_node(root,value,0) + 1<<endl;

     cout<<"enter the node to find the height\n";
    cin>>value;
    cout<<"height is "<<height_of_node(root,value)<<endl;

}