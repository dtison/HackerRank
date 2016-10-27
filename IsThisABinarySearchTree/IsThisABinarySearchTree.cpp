/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/

    bool check_node (Node* node, int min, int max) {
        if (node == NULL) {
            return true;
        }
        return  (node->data > min &&
                 node->data < max &&
                check_node(node->left, min, node->data) &&
                check_node(node->right, node->data, max));
    };

    bool checkBST(Node* root)  {
        // Workaround for missing climits and limits.h
        #define INT_MIN -2147483648
        #define INT_MAX +2147483647
        return check_node(root, INT_MIN, INT_MAX);
    }
