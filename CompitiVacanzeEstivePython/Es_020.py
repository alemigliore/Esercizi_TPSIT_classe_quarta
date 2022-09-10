#Pangram

def is_pangram(sentence):
    alphabet = "abcdefghijklmnopqrstuvwxyz"   
    return set(alphabet).issubset(sentence.lower())