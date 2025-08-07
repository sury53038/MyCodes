x = int(input("Enter number of row :: "))
print('\n')


for i in range(x):
    print('*'*(2*i+1),end='\n')

print('\n')

for i in range(x):
    print('*'*(2*(x-i)-1),end='\n')



for i in range(x):
    print(' ' * (x-i),end='')
    print('*' * (2*i+1),end='\n')