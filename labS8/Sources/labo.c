#include "labo.h"


long long fibonacci(int n, int* tableau) {
	if (tableau[n] == 0) {
		return 0;
	}
	return tableau[n] + additionTableau(tableau, n + 1);
}

TreeNode* tree_create_node(void* data){
		TreeNode* t = t->data;
		if(t->data == NULL){
		return 1;
		}
		return t->data; 
}

void tree_add_node(TreeNode* root, TreeNode* node){

	if(root->left && root->right == NULL){
		node->left;
	}
	else{
		return 0;
	}
}

int dfs(TreeNode* root, void* key){

}

int bfs(TreeNode* root, void* key){

}
