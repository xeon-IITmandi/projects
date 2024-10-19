#include <iostream>
#include <vector>
#include <string>
#include <algorithm>//for std::sort to work
//std::sort(start,end)
//here start is arr.begin() and end can be either arr.end() or anything like {arr.begin()+x} or {arr.end()-x}
//arr.end() to sort full list

int main()
{
    long long  int length,el;
    std::cout<<"enter length of the array: ";
    std::cin>>length;

    std::vector <int> nums;
    for(int i=0;i<length;i++)
    {
        std::cout<<"enter element no. "<<i+1<<": ";
        std::cin>>el;
        nums.push_back(el);
    }
    std::cout<<std::endl;

    std::cout<<"Unsorted List: ";
    std::cout<<"[";

    for (int i=0;i<length;i++)
    {
        if(i<length-1)
        {
            std::cout<<nums[i]<<", ";
        }
        else
        {
            std::cout<<nums[i]<<"]";
        }
    }

    std::cout<<std::endl;

    // std::sort(nums.begin(),nums.end());

    // std::cout<<"Sorted List: ";
    // std::cout<<"[";

    // for (int i=0;i<length;i++)
    // {
    //     if(i<length-1)
    //     {
    //         std::cout<<nums[i]<<", ";
    //     }
    //     else
    //     {
    //         std::cout<<nums[i]<<"]";
    //     }
    // }
    std::sort(nums.begin(),nums.begin()+4);

    std::cout<<std::endl;

    std::cout<<"Sorted List(first 4 elements sorted): ";
    std::cout<<"[";

    for (int i=0;i<length;i++)
    {
        if(i<length-1)
        {
            std::cout<<nums[i]<<", ";
        }
        else
        {
            std::cout<<nums[i]<<"]";
        }
    }






    return 0;
}
