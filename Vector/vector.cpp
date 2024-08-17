#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    // // create vector
    // vector<int> v;
    // vector<int> v1(5, 1);
    // // Size of capacity
    // cout << "size of v : " << v.size() << endl;
    // cout << "Capacity of v : " << v.capacity() << endl;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(10);
    // cout << "size of v : " << v.size() << endl;
    // cout << "Capacity of v : " << v.capacity() << endl;

    // // update value
    // v[1] = 5;

    // cout << "size of v : " << v1.size() << endl;
    // cout << "Capacity of v : " << v1.capacity() << endl;

    // v1.push_back(8);

    // cout << "size of v1 : " << v1.size() << endl;
    // cout << "Capacity of v1 : " << v1.capacity() << endl;

    // vector<int>v3 = {1,2,3,4,5};
    // cout<<"size of v3 : "<<v3.size()<<endl;
    // cout<<"Capacity of v3 : "<<v3.capacity()<<endl;

    // Delete value form vector

    // vector<int> vnew;
    // vnew.push_back(10);
    // vnew.push_back(85);
    // vnew.push_back(65);
    // vnew.push_back(30);
    // vnew.push_back(15);
    // vnew.pop_back();
    // cout << "size of vnew : " << vnew.size() << endl;
    // cout << "Capacity of vnew : " << vnew.capacity() << endl;

    // vnew.erase(vnew.begin() + 1);
    // cout << "size of vnew : " << vnew.size() << endl;
    // cout << "Capacity of vnew : " << vnew.capacity() << endl;

    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // cout << endl;

    // vnew.insert(vnew.begin() + 1, 50);
    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }

    // cout << endl;

    // vnew[1] = 37;
    // for (int i = 0; i < vnew.size(); i++)
    // {
    //     cout << vnew[i] << " ";
    // }
    // cout << endl;
    // vnew.clear();
    // cout << "size of vnew : " << vnew.size() << endl;
    // cout << "Capacity of vnew : " << vnew.capacity() << endl;


    // vector<int>arr;
    // arr.push_back(10);
    // arr.push_back(9);
    // arr.push_back(18);
    // arr.push_back(8);

    // cout<<arr[0]<<endl;
    // cout<<arr.front()<<endl;
    // cout<<arr[arr.size()-1]<<endl;
    // cout<<arr.back()<<endl;


    // vector<int>a;
    // //copy vector of 1 vector to another

    // a=arr;
    // cout<<a.size();

    //sort the array using vector
    vector<int>ans;
    ans.push_back(5);
    ans.push_back(2);
    ans.push_back(3);
    ans.push_back(6);
    ans.push_back(1);
    ans.push_back(8);

    //sort in increasing order
    sort(ans.begin(),ans.end());
    for(int i = 0 ; i<ans.size() ; i++)
    {
        cout<<ans[i];
    }

    cout << endl;

    // //sort in decreasing order
    // sort(ans.begin(),ans.end(), greater<int>());
    // for(int i = 0 ; i<ans.size() ; i++)
    // {
    //     cout<<ans[i];
    // }


    // search in binary search
    cout<<binary_search(ans.begin() , ans.end() , 8)<<endl; 

    

}