#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isSameTree(TreeNode* p, TreeNode* q){
    if (p == NULL && q == NULL) {
        return true;
    }
    if (p == NULL && q != NULL) {
        return false;
    }
    if (p != NULL && q == NULL) {
        return false;
    }
    if (p->val == q->val) {
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
    return false;
}

int main()
{
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(1);

    std::cout << "a " << (isSameTree(a, b) ? "=" : "!=") << " b" << std::endl;

}
