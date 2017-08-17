while True:
    try:
        integer = int(input().strip())
        found = False
        multiple = 1
        while not found:
            if multiple % integer == 0:
                found = True
            else:
                multiple = 10 * multiple + 1
        print(len(str(multiple)))
    except EOFError:
        break