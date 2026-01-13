s = "Hello World"

#Converts all characters to uppercase.
print(s.upper())   

#Converts all characters to lowercase.
print(s.lower()) 

#Capitalizes first letter of each word.
print(s.title())   

#Swaps upper ↔ lower case.
print(s.swapcase()) 

#Checking (Boolean) Methods
#These return True or False.
print("Hello123".isalnum())   # True
print("123".isdigit())    # True

#Searching Methods
#Returns index of first occurrence, -1 if not found.
print(s.find("world"))

#Searches from right.
print("hello hello".rfind("hello"))

#Counts occurrences.
print("banana".count("a"))  # 3

#Joins list into string.
lst = ['a', 'b', 'c']
print("-".join(lst))

