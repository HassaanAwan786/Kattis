alpha_map = {
    'A': "@",
    'B': "8",
    'C': "(",
    'D': "|)",
    'E': "3",
    'F': "#",
    'G': "6",
    'H': "[-]",
    'I': "|",
    'J': "_|",
    'K': "|<",
    'L': "1",
    'M': "[]\\/[]",
    'N': "[]\\[]",
    'O': "0",
    'P': "|D",
    'Q': "(,)",
    'R': "|Z",
    'S': "$",
    'T': "']['",
    'U': "|_|",
    'V': "\\/",
    'W': "\\/\\/",
    'X': "}{",
    'Y': "`/",
    'Z': "2"
}

input_string = input()  # Read the full input string

result = ""
for c in input_string:
    if 'a' <= c <= 'z':
        result += alpha_map.get(c.upper(), c)
    elif 'A' <= c <= 'Z':
        result += alpha_map.get(c, c)
    else:
        result += c

print(result)
