#Reverse String

def reverse(input=''):
    output = ''
    for c in input:
      output = c + output
    return output