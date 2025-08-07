# def print_mat():
#     mat = []

#     r1 = [1,2,3,4]
#     r2 = [5,6,7,8]
#     r3 = [9,10,11,12]
#     r4 = [13,14,15,16]

#     mat.append(r1)
#     mat.append(r2)
#     mat.append(r3)
#     mat.append(r4)

#     print(mat)

#     for i in range (len(mat)):
#         for j in range (len(mat[i])):
#             print(mat[i][j],end=' ')

# print_mat()



mat = []

r1 = [1,2,3,4]
r2 = [5,6,7,8]
# r3 = [9,10,11,12]
# r4 = [13,14,15,16]

mat.append(r1)
mat.append(r2)
# mat.append(r3)
# mat.append(r4)

result = [[0] * len(mat) for i in range(len(mat[0]))]
for p in mat:
    print(p)
    print()

for i in range (len(mat)):
    for j in range (len(mat[0])):
        result[j][i] = mat[i][j]
for p in result:
    print(p)
    print()