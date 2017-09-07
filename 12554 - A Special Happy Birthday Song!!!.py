#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

def sing_the_song(idx, N, people, words):
    word = 0
    while word < 16:
        print(people[idx], words[word], sep=": ")
        idx = idx + 1
        idx = idx % N
        word = word + 1

    return idx

N = int(input())
people = []
for i in range(N):
    people.append(input().strip())

bday = "Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you"
words = bday.split()

if N % 16 == 0:
    times = int(N / 16)
else:
    times = int(N / 16) + 1

starter = 0
for j in range(times):
    starter = sing_the_song(starter, N, people, words) # index of the person who starts, no. of people,
                                                       # list of people, words
