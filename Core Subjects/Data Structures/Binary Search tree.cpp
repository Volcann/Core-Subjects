// -------------------------------------------------------------
// Check Validity of the biary tree refer to notes first
// -------------------------------------------------------------
//bool VALIDITYcheck(Node* root,int min,int max){
//    if(!root) return true;
//    if(root -> data >= min || root -> data <= max){
//        bool left = check(root -> left, min, root -> data);
//        bool right = check(root -> right, root -> data, max);
//        return left && right;
//    }
//    return false;
//}
// -------------------------------------------------------------
// Deleting in BST
// -------------------------------------------------------------
//Node* findMin(Node* node) {
//    while (node->left != NULL) node = node->left;
//    return node;
//}
//
//Node* findMax(Node* node) {
//    while (node->right != NULL) node = node->right;
//    return node;
//}
//
//// Function to delete a node in the BST
//Node* deleteNode(Node* root, int key) {
//    if(root == nullptr) return root;
//    //First find the value:
//    if(key > root -> data) root -> right = deleteNode(root -> right, key);
//    else if (key < root -> data)  root -> left = deleteNode(root -> left, key);
//    //If find key
//    else{
//        // Check if one or no node is present their
//        // If no node present at right delete for left
//        if(!root -> right){
//            // Deleting that node and pointing to next subtree and null may be in left side
//            Node *temp = root -> left;
//            delete root;
//            // This may return a Null or may a subtree which is appndend by recusive call itsself automatically
//            return temp;
//        }
//        // If no node present at left delete for right
//        else if(!root -> left){
//            // Deleting that node and pointing to next subtree and null may be in right side
//            Node *temp = root -> right;
//            delete root;
//            // This may return a Null or may a subtree which is appndend by recusive call itsself automatically
//            return temp;
//        }
//        // Check if two node is present
//        else{
//            //Now we can have two cases solution you can have any one of them Predecessor and Successor
//            // Its actually algorithm to delete
//            // 1 --- For Sucessor find the smallest value in right subtree
//            {
//                Node *temp = findMin(root -> right);
//                // Make current root node data = that smallest node
//                root -> data = temp -> data;
//                // Now delete that smallest node
//                // Iterate over the right node till finding that node to be deleted
//                root -> right = deleteNode(root -> right, temp -> data);
//            }
//            // 2 --- For Predecessor find the highest value in left subtree
////            {
////                Node *temp = findMax(root -> left);
////                // Make current root node data = that highest node
////                root -> data = temp -> data;
////                // Now delete that highest node
////                // Iterate over the left node till finding that node to be deleted
////                root -> left = deleteNode(root -> left, temp -> data);
////            }
//        }
//    }
//    return root;
//}
// -------------------------------------------------------------
// Min and Max 
// -------------------------------------------------------------
//void Max(Node *root){
//    if(root == NULL){
//        return;
//    }
//    if(root -> right) Max(root -> right);
//    else cout << root -> data << endl;
//}
//
//void Min(Node *root){
//    if(root == NULL){
//        return;
//    }
//    if(root -> left) Min(root -> left);
//    else cout << root -> data << endl;
//}
// -------------------------------------------------------------
// Log N 
// -------------------------------------------------------------
//bool Search(Node *root,int n){
//    if(!root) return 0;
//    if(root -> data == n) return 1;
//    if(n > root -> data) return Search(root -> right, n);
//    else return Search(root -> left, n);
//}
// -------------------------------------------------------------
//  Insertion O(n)
// -------------------------------------------------------------
//Node* TREE_MAKING(){
//    Node* root = nullptr;
//    int data = 0;
//    cout << "Enter Node Integer : ";
//    cin >> data;
//    root = new Node(data);
//    if(root -> data == -1) return nullptr;
//    if(data < root -> data) root -> left = TREE_MAKING();
//    else root -> right = TREE_MAKING();
//    return root;
//}
// -------------------------------------------------------------
//int main() {
//    // Constructing a sample binary search tree:
//    //      10
//    //      / \
//    //     8   11
//    //    / \   \
//    //   7   9   12
//    Node* root = new Node(10);
//    root->left = new Node(8);
//    root->right = new Node(11);
//    root->left->left = new Node(7);
//    root->left->right = new Node(9);
//    root->right->right = new Node(12);
//    cout << Search(root, 10);
//    return 0;
//}
// -------------------------------------------------------------
