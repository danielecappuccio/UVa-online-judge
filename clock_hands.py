#
# Competitive Programming
#
# @author        Daniele Cappuccio
# @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
# @license       MIT License (https://opensource.org/licenses/MIT)
#

def find_angle_hour(hour, minute):
    angle = hour * 30
    angle += 0.5 * minute
    return angle % 360

def find_angle_minute(minute):
    angle = minute * 6
    return angle % 360

while True:

    line = input().strip()
    if line == "0:00":
        break
    
    hour = int(line.split(":")[0])
    minute = int(line.split(":")[1])

    A = find_angle_hour(hour, minute)
    B = find_angle_minute(minute)

    angle = abs(A - B)
    if angle <= 180:
        print("%.3f" % angle)
    else:
        print("%.3f" % (360 - angle))