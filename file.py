# arr = []
# n =int( input())
# for i in range (0,n):
#     l = int(input())
#     arr.append(l)

# # print (arr)

# arr1 = []
# for x in arr:
#     arr1.append(x/2)

# # print(arr1)
# for y in arr1:
#     if y.strip().isdigit():
#         print("integer")

#     else:
#         print("float")
def swap_case(s):
    n = s.swapcase()
    return n

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)