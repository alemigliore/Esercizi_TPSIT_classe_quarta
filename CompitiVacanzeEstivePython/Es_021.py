#Isogram

def is_isogram(word):
  letters = [ch for ch in word.lower() if "a" <= ch <= "z"]
  return len(letters) == len(set(letters))
