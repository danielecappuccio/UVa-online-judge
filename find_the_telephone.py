letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

while True:
    try:
        line = input()
        for char in line:
            if char not in letters:
                print(char, end="")
            else:
                if char in "ABC":
                    print("2", end="")
                elif char in "DEF":
                    print("3", end="")
                elif char in "GHI":
                    print("4", end="")
                elif char in "JKL":
                    print("5", end="")
                elif char in "MNO":
                    print("6", end="")
                elif char in "PQRS":
                    print("7", end="")
                elif char in "TUV":
                    print("8", end="")
                else:
                    print("9", end="")
                
        print()

    except EOFError:
        break