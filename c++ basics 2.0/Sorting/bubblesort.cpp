void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
   for(int i =1 ; i< n ; i++){
       bool swaped =false;
       for( int j = 0; j< n-1; j++){
           if(arr[j] > arr[j+1]){
               swap(arr[j ] , arr[j+1]);
               swaped = true;
           }
       }
       if(swaped ==false)
       break;
   }
}