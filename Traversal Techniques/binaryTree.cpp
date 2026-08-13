#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=nullptr ;
        right=nullptr;
    }
};

//Function to build the tree-LevelWise
Node* buildTree(vector<int>& arr){
    if(arr.empty() || arr[0]==-1)return nullptr;

    Node* root = new Node(arr[0]);
    queue<Node*>q;
    q.push(root);
    int i = 1;

    while(!q.empty() || i<(int)arr.size()){
        Node* curr = q.front();
        q.pop();

        if(i<(int)arr.size()){
            if(arr[i]!=-1){
                curr->left = new Node(arr[i]);
                q.push(curr->left);
            }
            i++;
        }
        if(i<(int)arr.size()){
            if(arr[i]!=-1){
                curr->right = new Node(arr[i]);
                q.push(curr->right);
            }
            i++;
        }
    }

    return root;
}

//Making all traversals on the built tree

void preorderTraversal(Node* root, vector<int>& pre){
    if(!root)return;

    pre.push_back(root->data);
    preorderTraversal(root->left, pre);
    preorderTraversal(root->right, pre);
}

void inorderTraversal(Node* root, vector<int>& in){
    if(!root)return;

    inorderTraversal(root->left, in);
    in.push_back(root->data);
    inorderTraversal(root->right, in);
}

void postOrderTraversal(Node* root, vector<int>& post){
    if(!root)return;

    postOrderTraversal(root->left, post);
    postOrderTraversal(root->right, post);
    post.push_back(root->data);
}

void levelOrder(Node* root, vector<int>& level){
    if(!root)return;

    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        level.push_back(curr->data);

        if(curr->left)q.push(curr->left);
        if(curr->right)q.push(curr->right);
    }
}

void print(vector<int>& arr){
    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    
    //Taking the input 
    int n;
    cin>>n;
    vector<int> tree(n);
    for(int i = 0; i<n; i++){
        cin>>tree[i];
    }

    Node* root = buildTree(tree);

    vector<int>pre,in,post,level;

    preorderTraversal(root, pre);
    inorderTraversal(root, in);
    postOrderTraversal(root, post);
    levelOrder(root, level);

    cout<<"Preorder: ";
    print(pre);
    cout<<"Inorder: ";
    print(in);
    cout<<"Postorder: ";
    print(post);
    cout<<"Level Order: ";
    print(level);

}
