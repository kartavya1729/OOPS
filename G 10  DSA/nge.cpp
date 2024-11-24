// Using STACK

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> findNGEOnLeft(const vector<int> &arr) 
{
    vector<int> result(arr.size(), -1);
    stack<int> st;
    
    for (int i = 0; i < arr.size(); ++i) 
    {
        while (!st.empty() && arr[i] >= st.top()) 
        {
            st.pop();
        }
        
        if (!st.empty()) 
        {
            result[i] = st.top();
        }

        st.push(arr[i]); 
    }
    
    return result;
}

int main() 
{
    vector<int> arr = {5, 3, 9, 7, 6, 11, 2, 10};
    vector<int> result = findNGEOnLeft(arr);
    
    cout << "NGE on Left :" << endl;
    
    for (int num : result) 
    {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}



// next greater element on the left

// #include <iostream>
// using namespace std;

// void printNGE(int arr[], int n)
// {
// 	int next, i, j;
// 	for (i = 0; i < n; i++) 
//     {
// 		next = -1;
// 		for (j = i - 1; j =0; j--) 
//         {
// 			if (arr[i] > arr[j]) 
//             {
// 				next = arr[i];
// 				break;
// 			}
// 		}
// 		cout << arr[i] << " --> " << next << endl;
// 	}
// }

// int main()
// {
// 	int arr[] = { 11, 13, 21, 3 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	printNGE(arr, n);
// 	return 0;
// }
