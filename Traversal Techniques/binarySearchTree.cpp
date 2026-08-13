#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

//This function handles how the nodes are inserted
Node* insertInBst(Node* root, int val){
    if(root == nullptr)return new Node(val);

    if(val>root->data){
        root->right = insertInBst(root->right, val);
    }
    if(val<root->data){
        root->left = insertInBst(root->left, val);
    }

    return root;
}

//This function will actually build the tree and return its root so that it can be used successively to traverse
Node* buildBST(vector<int>& arr){
    Node* root = nullptr;
    for(int val : arr){
        root = insertInBst(root, val);
    }

    return root;
}

void preorder(Node* root, vector<int>& pre){
    if(!root)return;
    pre.push_back(root->data);
    preorder(root->left, pre);
    preorder(root->right, pre);
}

void inorder(Node* root, vector<int>& in){
    if(!root)return;

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

void postOrder(Node* root, vector<int>& post){
    if(!root)return;

    postOrder(root->left, post);
    postOrder(root->right, post);
    post.push_back(root->data);
}

void levelOrder(Node* root, vector<int>& level){
    if(!root)return;

    queue<Node*> q;
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

    Node* root = buildBST(tree);

    vector<int> pre, in, post, level;

    preorder(root, pre);
    inorder(root, in);
    postOrder(root, post);
    levelOrder(root, level);

    print(pre);
    print(in);
    print(post);
    print(level);
}
