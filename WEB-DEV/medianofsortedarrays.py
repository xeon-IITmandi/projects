m=int(input("enter length of nums1:"))
n=int(input("enter length of nums2:"))
nums1=[]
nums2=[]
for i in range(m):
    x=int(input(f"enter element {i+1} of nums1:"))
    nums1.append(x)
for i in range(n):
    y=int(input(f"enter element {i+1} of nums2:"))
    nums2.append(y)
nums3=nums1+nums2
nums3.sort()
print(nums3)
if len(nums3)%2==1:
    print(nums3[int(((len(nums3)+1)/2)-1)])
elif len(nums3)%2==0:
    print((nums3[int((len(nums3)/2)-1)] + nums3[int(((len(nums3)+2)/2) -1)])/2)
