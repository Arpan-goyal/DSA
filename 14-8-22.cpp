#include<iostream>
#include<vector>           //vector is a STL(standard Template Lib) class
using namespace std;

class Kuchbhi
{
    public:
        vector<int> Createarr(int len)
        {
            int element;
            vector<int> Varr;
            for(int i=0;i<len;i++)
            {
                cout<<"Enter value:";
                cin>>element;
                Varr.push_back(element);
            }
            return Varr;
        }

        // int doSearch(vector<int> arry,int value)
        // {
        //     for(int i=0;i<arry.size();i++)
        //     {
        //         if(arry[i]==value)
        //         {
        //             return i;
        //             break;
        //         }
        //     }
        //     return -1;
        // }

        // void findandcount(vector<int> arr,int val,int &count)
        // {
        //     for(int i=0;i<arr.size();i++)
        //     {
        //         if(arr[i]==val)
        //         {
        //             count++;
        //         }
        //     }
        // }

        bool checkrepeat(int val,vector<int> temparr)
        {
            for(int i=0;i<temparr.size();i++)
            {
                if(val==temparr[i])
                   return true;
            }
            return false;
        }
        vector<int> interSection(vector<int> a1,vector<int> a2)
        {
            vector<int> tempa;
            for(int i=0;i<a1.size();i++)
            {
                bool result=checkrepeat(a1[i],tempa);
                if(result==true)
                   continue;

                for(int j=0;j<a2.size();j++)
                {
                    if(a1[i]==a2[j])
                    {
                        tempa.push_back(a1[i]);
                        break;
                    }
                }
            }
            return tempa;
        }

        // vector<int> join2array(vector<int> arr1, vector<int> arr2)
        // {
        //     vector<int> arr3;
        //     int i=0,j=0;
        //     while(i<arr1.size())
        //     {
        //         arr3.push_back(arr1[i]);
        //         i++;
        //     }
        //      while(j<arr2.size())
        //     {
        //         arr3.push_back(arr2[j]);
        //         j++;
        //     }
        //     return arr3;
        // }
        void showarray(vector<int> ary)
        {
            cout<<"\nOutput after Intersection :\n";
            for(int i=0;i<ary.size();i++)
            {
                cout<<ary[i]<<" ";
            }
        }
};
int main()
{
    Kuchbhi obj; 
    cout<<"Enter elements of first array\n";
    vector<int> arr1=obj.Createarr(5);

    cout<<"Enter elements of second array\n";
    vector<int> arr2=obj.Createarr(7);

    // vector<int> array3;
    // array3=obj.join2array(arr1,arr2);
    // for(int i=0;i<array3.size();i++)
    // {
    //     cout<<array3[i]<<" ";
    // }


    // int wanted=20;
    // int result=obj.doSearch(array,wanted);
    //     if(result==-1)
    //         cout<<"\nNot Found";
    //     else
    //         cout<<"\nFound at pos"<<result;

    // int count=0;
    // obj.findandcount(array,wanted,count); 
    // cout<<"\nFound "<<count<<" times";   


    vector<int> realarr=obj.interSection(arr1,arr2);    
    obj.showarray(realarr);
}

