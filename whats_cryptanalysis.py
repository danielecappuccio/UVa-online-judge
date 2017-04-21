freq = {}
A = "abcdefghijklmnopqrstuvwxyz"

while True:
    try:
        line = input();
        line = line.upper()
        for c in line:
            if c in A.upper():
                if c not in freq:
                    freq[c] = 1
                else:
                    freq[c] += 1
    except EOFError:
        break

while len(freq):
    M = 0
    freq_list = []
    for key in freq:
        if freq[key] > M:
            M = freq[key]
    for key in freq:
        if freq[key] == M:
            freq_list.append(key)
    freq_list.sort()
    C = freq_list[0]
    print(C, M)
    del freq[C]
