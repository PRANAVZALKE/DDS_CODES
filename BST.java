class BST{
    Node root = null;
    static class Node{
        int val;
        Node left,right;
        
        Node(int v){
            val =  v;
            left = null;
            right = null;
            System.out.println("Created: "+ val);
        }
        
    }
        
        Node insert(int val){
            Node new_node = new Node(val);
            
            if(root == null){
                root = new_node;
                return  root;
            }
            Node curr = root;
            while(curr != null){
                if(val < curr.val && curr.left != null)
                curr = curr.left;
                else if (val > curr.val && curr.right != null)
                curr = curr.right;
                else break;
            }
            if(val < curr.val) curr.left = new_node;
            else curr.right = new_node;
            
            return root;
        }
        void print(){
            System.out.println(root.val + " ");
            System.out.println(root.left.val + " ");
            System.out.println(root.right.val + " ");
        
    }

    public static void main (String[] args){
        BST  obj = new BST();
        obj.next = new Node(10);   
        obj.root.left = new Node(5);
        obj.root.right = new Node(15);
        obj.insert();
        obj.print();
    }
}
