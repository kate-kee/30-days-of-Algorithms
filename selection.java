
public class selection {
    static class Node {
        int data;
        Node next;
    };
    static Node newNode(int val)
    {
        Node temp = new Node();
    
        temp.data = val;
    
        temp.next = null;
    
        return temp;
    }
    static Node selectionSort(Node head)
    {
        Node a, b, c, d, r;
 
        a = b = head;
 
        // While b is not the last node
        while (b.next != null) {
 
            c = d = b.next;
 
            // While d is pointing to a valid node
            while (d != null) {
 
                if (b.data > d.data) {
 
                    // If d appears immediately after b
                    if (b.next == d) {
 
                        // Case 1: b is the head of the linked list
                        if (b == head) {
 
                            // Move d before b
                            b.next = d.next;
                            d.next = b;
 
                            // Swap b and d pointers
                            r = b;
                            b = d;
                            d = r;
                            // Update the head
                            head = b;
 
                            // Skip to the next element
                            // as it is already in order
                            d = d.next;
                        }
 
                        // Case 2: b is not the head of the linked list
                        else {
 
                            // Move d before b
                            b.next = d.next;
                            d.next = b;
                            a.next = d;
 
                            // Swap b and d pointers
                            r = b;
                            b = d;
                            d = r;
 
                            // Skip to the next element
                            // as it is already in order
                            d = d.next;
                        }
                    }
 
                    // If b and d have some non-zero
                    // number of nodes in between them
                    else {
 
                        // Case 3: b is the head of the linked list
                        if (b == head) {
 
                            // Swap b.next and d.next
                            r = b.next;
                            b.next = d.next;
                            d.next = r;
                            c.next = b;
 
                            // Swap b and d pointers
                            r = b;
                            b = d;
                            d = r;
                            c = d;
 
                            // Skip to the next element
                            // as it is already in order
                            d = d.next;
 
                            // Update the head
                            head = b;
                            
                        }
 
                        // Case 4: b is not the head of the linked list
                        else {
 
                            // Swap b.next and d.next
                            r = b.next;
                            b.next = d.next;
                            d.next = r;
                            c.next = b;
                            a.next = d;
 
                            // Swap b and d pointers
                            r = b;
                            b = d;
                            d = r;
 
                            c = d;
 
                            // Skip to the next element
                            // as it is already in order
                            d = d.next;
                        }
                    }
                }
                else {
 
                    // Update c and skip to the next element
                    // as it is already in order
                    c = d;
                    d = d.next;
                }
            }
 
            a = b;
            b = b.next;
        }
 
        return head;
    }
 
    // Function to print the list
    static void printList(Node head)
    {
        while (head != null) {
            System.out.print(head.data + " ");
            head = head.next;
        }
    }
    public static void main(String args[])
    {

        
        Node head = newNode(64);
        head.next = newNode(25);
        head.next.next = newNode(12);
        head.next.next.next = newNode(22);
        head.next.next.next = newNode(11);
        head = selectionSort(head);
 
        printList(head);
    }
}
 