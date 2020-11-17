struct node * newNode =(struct node*)malloc(sizeof(struct node*));
newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
	if(root==NULL){
    root=newNode;
  }
  if(data<root->data){
    root->left=insert(root->left,data);
  }
  else if(data>root->data){
    root->right=insert(root->right,data);
  }
  return root;
}
