try:
    inp = input()
    while inp != '':
        inp = inp.replace('i', '#')\
                 .replace('e', 'i')\
                 .replace('#', 'e')\
                 .replace('I', '#')\
                 .replace('E', 'I')\
                 .replace('#', 'E')
        print(inp)
        inp = input()
except EOFError:
    pass
