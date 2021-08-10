int start=0;
    int end=size-1;
    int mid=size/2;

    while (start<end)
    {
        cout << "mid "<<endl;
        cout<<mid<< " " <<arr[mid]<<endl;

        cout << "start "<<endl;
        cout<<start<< " " <<arr[end]<<endl;

        cout << "end "<<endl;
        cout<<end<< " " <<arr[end]<<endl;

        cout <<end;
        if(arr[mid]==key){
            return mid;
        }else if (arr[mid]>key)
        {
            end=mid-1;
        }else if (arr[mid]<key)
        {
            start=mid+1;
        }
        
        mid=end-start;

        mid/=2;

        mid+=start;
        
    }
    

    return -1;