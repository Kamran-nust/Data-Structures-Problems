// Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

// Implement the LRUCache class:

    //LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
    //int get(int key) Return the value of the key if the key exists, otherwise return -1.
    //void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache.
    //If the number of keys exceeds the capacity from this operation, evict the least recently used key.

//The functions get and put must each run in O(1) average time complexity.

class LRUCache {
public:

class Node {
    public:

    Node* prev;
    Node* next;
    int key, val;

    Node(int k, int v)
    {
        key =k;
        val=v;
        prev=NULL;
        next=NULL;
    }
    
};
Node *head= new Node(-1,-1);
Node *tail = new Node(-1,-1);
unordered_map<int,Node*>m;
int limit;

void AddNode(Node* newNode)
    {
        Node* temp=head->next ;
        temp->prev=newNode;
        newNode->next=temp;
        head->next= newNode;
        newNode->prev=head;

    }
    void deleteNode(Node * oldNode) 
    {
        Node* oldNext=oldNode->next ;
        Node* oldprev=oldNode->prev ;
        oldprev->next=oldNext;
        oldNext->prev=oldprev;
    }


    LRUCache(int capacity) {
        limit=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(m.find(key)==m.end())
        {
            return -1;
        }
        
        Node* ansNode=m[key];
        //int ans = ansNode->val;
        m.erase(key);
        deleteNode(ansNode);
        AddNode(ansNode);
        m[key] = ansNode; 
        return ansNode->val;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end())
        {
            //Node* oldNode =m[key];
            deleteNode (m[key]);
            m.erase(key);
        }
        if(limit==m.size())
        {
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }

        Node * newNode = new Node(key,value);
        AddNode(newNode);
        m[key]=newNode;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
