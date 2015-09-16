password = input()
alphabet = "abcdefghijklmnopqrstuvwxyz"
encountered_odd = False
palindrome = True

for letter in alphabet:
    if password.count(letter) % 2:
        if encountered_odd == False:
            encountered_odd = True
        else:
            palindrome = False
            break
if palindrome:
    print("YES")
else:
    print("NO")
