//IN Tree :

Node* lca(Node* root ,int n1 ,int n2 )
    {
        if(!root)return root;
        
        if(root->data==n1 || root->data==n2)return root;
        
        Node* l=lca(root->left,n1,n2);
        Node* r=lca(root->right,n1,n2);
        
        if(!l && r)return r;
        if(l && !r)return l;
        if(l && r)return root;   
    }

//In BST:
Node* LCA(Node *root, int n1, int n2)
{
    
   if(root==NULL)return root;
   
   if(root->data > max(n1,n2) )return LCA(root->left,n1,n2) ;
   else if(root->data < min(n1,n2) )return LCA(root->right,n1,n2) ;
   else
   return root;
}
