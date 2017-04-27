 #
 # Competitive Programming
 #
 # @author        Daniele Cappuccio
 # @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 #

while True:
    line = input()
    str_a_init = line.split()[0]
    str_b_init = line.split()[1]

    a = int(str_a_init)
    b = int(str_b_init)

    len_max = max(len(str_a_init), len(str_b_init))
    zeros_to_add_a = len_max - len(str_a_init)
    zeros_to_add_b = len_max - len(str_b_init)

    str_a = ""
    str_b = ""
    for j in range(zeros_to_add_a):
        str_a += "0"
    for k in range(zeros_to_add_b):
        str_b += "0"
    str_a += str_a_init
    str_b += str_b_init

    if not a and not b:
        break

    carry = 0
    n_carries = 0
    for i in range(len(str_a)-1, -1, -1):
        digit_a = int(str_a[i])
        digit_b = int(str_b[i])
        if digit_a + digit_b + carry > 9:
            n_carries += 1
            carry = int(str(digit_a + digit_b + carry)[0])
        else:
            carry = 0
    if n_carries == 0:
        print("No carry operation.")
    elif n_carries == 1:
        print("1 carry operation.")
    else:
        print(n_carries, "carry operations.")
    