string = "Education"
vowels = "aeiouAEIOU"
count = sum(1 for char in string if char in vowels)
print("Vowels:", count)
