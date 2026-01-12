#Methods in Arrays 
strings = ['a','b','c','d']

print(strings[2])

#push  
strings.append('e')      
#pop  
strings.pop() 
strings.pop()          

#addfirstelement 
strings.insert(0,'x')   

#splice
strings.insert(2,'alien')   

print(strings)

#Adds an element at the end of the list
strings.append('Hello')

print(strings)

#Returns a copy of the list
New_string = strings.copy()
print(New_string)

#Returns the number of elements with the specified value
count = strings.count('x')
print(count)

#Removes all the elements from the list
strings.clear()
print(strings)