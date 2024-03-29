class BinarySearchTree {
  class Node
  {
      int key;
      Node left, right;
      public Node(int item)
      {
          key = item;
          left = right = null;
      }
  }
  Node root;
  BinarySearchTree()
  {
       root = null;
  }
  void insert(int key)
  {
       root = insertRec(root, key);
  }
  Node insertRec(Node root, int key)
  {

      if (root == null)
      {
          root = new Node(key);
          return root;
      }
      if (key < root.key)
          root.left = insertRec(root.left, key);
      else if (key > root.key)
          root.right = insertRec(root.right, key);
      return root;
  }
  void inorder()
  {
       inorderRec(root);
  }
  void inorderRec(Node root)
  {
      if (root != null) {
          inorderRec(root.left);
          System.out.println(root.key);
          inorderRec(root.right);
      }
  }
void deleteKey(int value){
  root=deleteRec(root,value);
}
void findKey(int value){
    root=findSibling(root,value);
   System.out.println(root);
  }
Node findSibling(Node root,int key){
    if(root==null){
        return root;
    }
    else if(root.left!=null && root.left.key==key){
        return root.right;
    }
    else if(root.right!=null&& root.right.key==key){
        return root.left;
    }
    else {
       Node temp= findSibling(root.left,key);
        if (temp!=null){return temp;}
        temp=findSibling(root.right,key);
        return temp;
    }

    }
Node deleteRec(Node root, int key){
    //empty tree
    if(root == null) return root;
    if(key<root.key){
    //No children node
        root.left=deleteRec(root.left,key);}
    else if(key>root.key){ 
    root.right=deleteRec(root.right,key);}
    else{
    //One child node
        if(root.left==null){
       return root.right;
        }
        else if(root.right==null){
        return root.left;      
        }
        //Two child nodes
       root.key=minValue(root.right);
       root.right=deleteRec(root.right,root.key);
}
return root;
}
int minValue(Node root){
    int minv=root.key;
    while(root.left!=null){
        minv=root.left.key;
        root=root.left;
    }
    return minv;
}
  // Driver Code
  public static void main(String[] args)
  {
      BinarySearchTree tree = new BinarySearchTree();
      tree.insert(50);
      tree.insert(30);
      tree.insert(20);
      tree.insert(40);
      tree.insert(70);
      tree.insert(60);
      tree.insert(80);
      tree.inorder();
  
       tree.findKey(60);
       
      tree.inorder();
  }
}