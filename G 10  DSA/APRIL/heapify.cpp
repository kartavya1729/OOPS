void heapify(vector<int>&arr,int i,int n)
{
   int left = 2 * i + 1;
   int right = 2 * i + 2;
   int smallest = i;

   if(left < n && arr[left] < arr[smallest])
   {
        smallest = left;
   }

   if(right< n && arr[right] < arr[smallest])
   {
        smallest=right;
   }

   if(smallest!=i)
   {
        swap(arr[i],arr[smallest]);
        heapify(arr,n,smallest);
   }
}
void buildHeap(vector<int>&arr)
{   
    int n = arr.size();
    for(i = n / 2-1 ; i > = 0 ; i--)
    {
        heapify(arr,n,i);
    }
}

void heapsort(vector<int>&arr)
{

    buildheap(arr);
    for(int i = n-1 ; i > 0; i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }
}

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    } 
    
    buildheap(arr);  
}