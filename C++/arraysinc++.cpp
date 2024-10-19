#include <iostream>
#include <array>

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // std::cout << "[";

    // Calculate the size of the array
    // size_t count = sizeof(arr) / sizeof(arr[0]); // This is the correct way to get the size of a C-style array

    // for (size_t i = 0; i < count;i++) // Use count in the loop condition
    // {
    //     std::cout << arr[i];
    //     if (i < count - 1) // Avoid printing a comma after the last element
    //     {
    //         std::cout << ", ";
    //     }
    // }
    // std::cout << "]" << std::endl;

    // Uncomment the following code if you want to sum the elements
    /*
    int sum = 0;
    for (int el : arr)
    {
        std::cout << "Value : " << el << std::endl;
        sum += el;
    }
    
    std::cout << "sum: " << sum << std::endl;
    */

   //arrays of characters
    
//    char arr[]={'H','E','L','L','O','\0'};
//    char arr[6]={'H','E','L','L','O'};
//    int count=sizeof(arr)/sizeof(arr[0]);

//    for(int i=0;i<count;i++)
//    {
//         arr[i]=65+i;
//    }

//    for (auto el:arr)
//    {
//     std::cout<<el;
//    }

    // std::cout<<arr;

    // char msg[]={"I am Good Boy."};
    // std::cout<<msg<<std::endl;
    
    // int nums[]={1,2,3};
    // std::cout<<"nums: "<<nums<<std::endl;
    
    // std::cout<<"nums[3]: "<<nums[3]<<std::endl;
   


    //using <array> header file


    std::array <int,5> num={1,2,3,4,5};
    // num[10]=1000;
    // std::cout<<num[10];
    // std::sort(num.begin(),num.end());

    // for(auto el:num)
    // {
    //     std::cout<<el<<std::endl;
    // }



    //using <vector> header file


    
    return 0;
}
