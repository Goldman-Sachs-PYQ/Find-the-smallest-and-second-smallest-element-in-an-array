vector<int> minAnd2ndMin(int arr[], int n) 
{
    int i, first, second;
    vector<int> v;
 
    /* There should be atleast two elements */
    if (n < 2)
    {
        v.push_back(-1);
        return v;
    }
 
    first = second = INT_MAX;
    
    for (i = 0; i < n ; i ++)
    {
        if(arr[i]<first)
        {
            first=arr[i];
        }
    }

    
    for (i = 0; i < n ; i ++)
    {
        if(arr[i]<second && arr[i]!=first)
        {
            second=arr[i];
        }
    }
    if(second==INT_MAX)
    {
        v.push_back(-1);
    }
    else if(second!=INT_MAX)
    {
         v.push_back(first);
        v.push_back(second);
    }

return v;
}
