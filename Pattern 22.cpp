class Solution {
  public:
    void printSquare(int n) {
       
        for(int i=0;i<2*n-1;++i){
            for(int j=0;j<2*n-1;++j){
                for(int k=0;k<n;++k){
                     if(i==k || i==2*n-2-k || j==k || j==2*n-2-k){
                    cout << n-k << " ";
                    break;
                }
                
                }
               
             
            }
            cout << endl;
        }
    }
};
