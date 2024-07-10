// -------------------------------------------
// Boundary traversal
// -------------------------------------------
//bool leafnode(Node *leaf){
//    if(!leaf -> left) return 0;
//    else if(!leaf -> right) return 0;
//    else return 1;
//}
//
//void Traverseleft(Node *root,vector<int> &v){
//    Node *curr = root -> left;
//    while (curr) {
//        if(leafnode(curr)) v.push_back(curr -> data);
//        if(curr -> left) curr = curr -> left;
//        else curr = curr -> right;
//    }
//}
//
//void Traverseright(Node *root,vector<int> &v){
//    Node *curr = root -> right;
//    while (curr) {
//        if(leafnode(curr)) v.push_back(curr -> data);
//        if(curr -> right) curr = curr -> right;
//        else curr = curr -> left;
//    }
//}
//
//void inorderLeafACESS(Node *root,vector<int> &v){
//    if(!leafnode(root)){
//        v.push_back(root -> data);
//        return;
//    }
//    if(root -> left) inorderLeafACESS(root -> left, v);
//    if(root -> right) inorderLeafACESS(root -> right, v);
//}
//
//vector<int> traverseBoundary(Node *root){
//    vector<int> v;
//    v.push_back(root -> data);
//    Traverseleft(root,v);
//    inorderLeafACESS(root, v);
//    Traverseright(root,v);
//    return v;
//}
// -------------------------------------------
// Zig Zag and Spiral Traversal
// -------------------------------------------
//int HEIGHT_OF_TREE(BinaryTreeNode<int> *node){
//    if(node == nullptr) return 0;
//    int n = HEIGHT_OF_TREE(node -> left) + 1;
//    int m = HEIGHT_OF_TREE(node -> right) + 1;
//    return max(n,m);
//}
//
//void levelORDER(BinaryTreeNode<int> *node,int level,vector<int> &temp){
//    if(node == nullptr) return;
//    if(level == 1) temp.push_back(node -> data);
//    else if(level > 1){
//        levelORDER(node -> left, level - 1,temp);
//        levelORDER(node -> right, level - 1,temp);
//    }
//}
//
//vector<int> zigZagTraversal(BinaryTreeNode<int> *node)
//{
//    vector<int> result;
//    bool flag = 0;
//
//    for(int i = 1 ; i < HEIGHT_OF_TREE(node)+1 ; i++){
//        vector<int> temp;
//        levelORDER(node, i, temp);
//        if(flag) reverse(temp.begin(), temp.end());
//        for(int i : temp) result.push_back(i);
//        flag = !(flag);
//    }
//
//    return result;
//}
// -------------------------------------------
// Nessacesary:
// Maps
// Queues storing pairs
// -------------------------------------------
//void topView(Node* root) {
//    if (root == NULL) return;
//    map<int,int> level_number;
//    queue<pair<Node*, int>> q;
//
//    q.push({root,0});
//
//    while (!q.empty()) {
//        pair<Node*, int> temp = q.front();
//        q.pop();
//
//        Node *node = temp.first;
//        int hd = temp.second;
//        if(!level_number[hd]){
//        level_number[hd] = node -> data;
//        }
//
//        if(node -> left){
//            q.push({node -> left,hd - 1});
//        }
//        if(node -> right){
//            q.push({node -> right,hd + 1});
//        }
//    }
//    for(auto i : level_number){
//        cout << i.first << i.second << endl;
//    }
//}
// -------------------------------------------
//void bottomView(Node* root) {
//    if (root == NULL) return;
//    map<int,int> level_number;
//    queue<pair<Node*, int>> q;
//
//    q.push({root,0});
//
//    while (!q.empty()) {
//        pair<Node*, int> temp = q.front();
//        q.pop();
//        Node *node = temp.first;
//        int hd = temp.second;
//
//        level_number[hd] = node -> data;
//
//        if(node -> left){
//            q.push({node -> left,hd - 1});
//        }
//        if(node -> right){
//            q.push({node -> right,hd + 1});
//        }
//    }
//    for(auto i : level_number){
//        cout << i.first << i.second << endl;
//    }
//}
// -------------------------------------------
//         1
//       /   \        Left and right view
//      2     3       Just swap recursive calls 
//     / \   / \
//    4   5 6   7
//         \
//          8
// -------------------------------------------
// -------------------------------------------
// Nessacesary:
// Vector initializing with zero of max tree size
// -------------------------------------------
// Right view
//void Runner(Node *root,int level,int maxlevel,vector<int> &v){
//    if(root == nullptr) return;
//    if(v[level] == 0){
//        v[level] = root -> data;
//    }
//    Runner(root -> right, level + 1, maxlevel, v);// if you prrocess right offciurse right will be added
//    Runner(root -> left, level + 1, maxlevel, v);
//}
//
//void RIGHT_VIEW(Node *root,int maxlevel){
//    vector<int> v(maxlevel,0);
//    Runner(root,0,maxlevel,v);
//    for(int i : v) cout << i << endl;
//}
// -------------------------------------------
// Left view
//void Runner(Node *root,int level,int maxlevel,vector<int> &v){
//    if(root == nullptr) return;
//    if(v[level] == 0){
//        v[level] = root -> data;
//    }
//    Runner(root -> left, level + 1, maxlevel, v);
//    Runner(root -> right, level + 1, maxlevel, v);// if you prrocess right offciurse right will be added
//}
//
//void LEFT_VIEW(Node *root,int maxlevel){
//    vector<int> v(maxlevel,0);
//    Runner(root,0,maxlevel,v);
//    for(int i : v) cout << i << endl;
//}
// -------------------------------------------
// Printing to specific level O(n^2)
// By using for loop
// -------------------------------------------
//void levelORDER(Node *node,int level){
//    if(node == nullptr) return;
//    if(level == 1) cout << node -> data << endl;
//    else if(level > 1){
//        levelORDER(node -> left, level - 1);
//        levelORDER(node -> right, level - 1);
//    }
//}
// -------------------------------------------
//Printing to all levels O(n)
//Effiecient from queue data structures
//void levelORDER(Node *node){
//    queue<Node*> q;
//    q.push(node);
//
//    while (!q.empty()) {
//        Node *curr = q.front();
//        q.pop();
//        cout << curr -> data << endl;
//        if(curr -> left) q.push(curr -> left);
//        if(curr -> right) q.push(curr -> right);
//    }
//}
// -------------------------------------------
// Leaf access of tree from inorder
// -------------------------------------------
//bool leafnode(Node *leaf){
//    if(!leaf -> left) return 0;
//    else if(!leaf -> right) return 0;
//    else return 1;
//}
//
//void inorderLeafACESS(Node *root,vector<int> &v){
//    if(!leafnode(root)){
//        v.push_back(root -> data);
//        return;
//    }
//    if(root -> left) inorderLeafACESS(root -> left, v);
//    if(root -> right) inorderLeafACESS(root -> right, v);
//}
// -------------------------------------------
//void MIN(Node *node,int &mini){
//    if(node == nullptr) return;
//    mini = min(mini,node -> data);
//    MIN(node -> left,mini);
//    MIN(node -> right,mini);
//}
// -------------------------------------------
//void MAX(Node *node,int &maxi){
//    if(node == nullptr) return;
//    maxi = max(maxi,node -> data);
//    MAX(node -> left,maxi);
//    MAX(node -> right,maxi);
//}
// -------------------------------------------
//void NO_OF_NODE_IN_TREE(Node *node,int &count){
//    if(node == nullptr) return;
//    count++;
//    NO_OF_NODE_IN_TREE(node -> left,count);
//    NO_OF_NODE_IN_TREE(node -> right,count);
//}
// -------------------------------------------
// For predecessor search for k + 1 and for
// successor k - 1
// -------------------------------------------
// In order sequece 4 2 5 1 6 3 7
// if k = 3 cout << 5 
// -------------------------------------------
//void check_INORDER_SEQUENCE_TILL_Value_K(int &i, int k , Node *root){
//    if(!root) return;
//    check_INORDER_SEQUENCE_TILL_Value_K(i, k, root -> left);
//    i++;
//    if(i == k){
//        cout << root -> data ;
//        return;
//    }
//    check_INORDER_SEQUENCE_TILL_Value_K(i, k, root -> right);
//}
// -------------------------------------------
//void PREORDER(Node *node){
//    if(node == nullptr) return;
//    cout << node -> data << endl;
//    INORDER(node -> left);
//    INORDER(node -> right);
//}
// -------------------------------------------
//void INORDER(Node *node){
//    if(node == nullptr) return;
//    INORDER(node -> left);
//    cout << node -> data << endl;
//    INORDER(node -> right);
//}
// -------------------------------------------
//void POSTORDER(Node *node){
//    if(node == nullptr) return;
//    INORDER(node -> left);
//    INORDER(node -> right);
//    cout << node -> data << endl;
//}
// -------------------------------------------
//int HEIGHT_OF_TREE(Node *node){
//    if(node == nullptr) return 0;
//    int n = HEIGHT_OF_TREE(node -> left) + 1;
//    int m = HEIGHT_OF_TREE(node -> right) + 1;
//    return max(n,m);
//}
// -------------------------------------------
//Node* TREE_MAKING(){
//    Node* root = nullptr;
//    int data = 0;
//    cout << "Enter Node Integer : ";
//    cin >> data;
//    root = new Node(data);
//    if(root -> data == -1) return nullptr;
//    cout << "Add at its left : " << endl;
//    root -> left = TREE_MAKING();
//    cout << "Add at its right : " << endl;
//    root -> right = TREE_MAKING();
//    return root;
//}
// -------------------------------------------
//In main
//int main() {
//    Node* root = new Node(1);
//    root->left = new Node(2);
//    root->right = new Node(3);
//    root->left->left = new Node(4);
//    root->left->right = new Node(5);
//    root->right->left = new Node(6);
//    root->right->right = new Node(7);
//
//    cout << HEIGHT_OF_TREE(root);
//    return 0;
//}
// -------------------------------------------
// Define a node of the binary tree
//struct Node {
//    int data;
//    Node* left;
//    Node* right;
//    Node(int value) {
//        data = value;
//        left = right = nullptr;
//    }
//};
// -------------------------------------------
