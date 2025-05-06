import sys
import re

for line in sys.stdin:
    line = line.strip()
    match = re.match(r'^[^0-9]+', line)
    if match:
        print(match.group(0))
    else:
        print("-1")