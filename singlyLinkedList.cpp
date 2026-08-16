#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

//Build LL from an Array
Node* buildLL(vector<int>& arr){
    if(arr.empty())return nullptr;

    Node* head = new Node(arr[0]);
    Node* tail = head;

    for(int i = 1; i<(int)arr.size(); i++){
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }

    return head;
}

//Print the list
void printList(Node* head){
    Node* curr = head;

    while(curr != nullptr){
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

//Length of the list

int findLength(Node* head){
    int len = 0;
    Node* curr = head;

    while(curr!=nullptr){
        len++;
        curr = curr->next;
    }

    return len;
}


//Find a value in linkedlist

bool search(Node* head, int key){
    Node* curr = head;

    while(curr!=nullptr){
        if(curr->data == key){
            return true;
        }

        curr = curr->next;
    }

    return false;
}

//Reverse linkedlist

Node* reverseList(Node* head){
    Node* curr = head;
    Node* prev = nullptr;

    while(curr != nullptr){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}


int main(){
    int n;
    cin>>n;
    vector<int> list(n);
    for(int i = 0; i<list.size(); i++){
        cin>>list[i];
    }

    Node* head = buildLL(list);
    cout<<"Original LinkedList: "; printList(head);
    cout << endl;

    cout << "Length of the LL: " << findLength(head) << endl;

    int key;
    cout<<"Find a value in LinkedList: ";
    cin>>key;

    bool ans = search(head, key);
    if(ans == 0){
        cout<<"Not found";
    }
    if(ans == 1){
        cout<<"Found";
    }
    cout << endl;

    Node* reversedHead = reverseList(head);
    cout<<"Reversed List: "; printList(reversedHead);
}

