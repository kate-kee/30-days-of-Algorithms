public class ternary {
    static int ternarysearch(int l, int r,int key,int arr[]){

        if(r>=l){
        int mid=l+(r-l)/3;
        int mid2=r-(r-l)/3;
        if(arr[mid]==key)
            return mid;
        if(key==arr[mid2])
            return mid2;
        if(key<arr[mid])
            return ternarysearch(l,mid-1,key,arr);
        else if(key>arr[mid2])
            return ternarysearch(mid2+1,r,key,arr);
        else
            return ternarysearch(mid+1,mid2-1,key,arr); 
        }
        return -1;
    }
    public static void main(String args[]){
        int l, r, p, key;
        int ar[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        l = 0;
        r = 9;
        key = 5;
        p = ternarysearch(l, r, key, ar);
        System.out.println("Index of " + key + " is " + p);
    }
}

