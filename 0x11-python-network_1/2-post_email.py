#!/usr/bin/python3
"""Script that:
1. takes in a URL
2. sends a POST request to the passed URL
3. takes email as a parameter
4. displays the body of the response
5. uses urllib
"""

import sys
import urllib.parse
import urllib.request


if __name__ == "__main__":
    url = sys.argv[1]
    value = {"email": sys.argv[2]}
    data = urllib.parse.urlencode(value).encode("ascii")

    request = urllib.request.Request(url, data)
    with urllib.request.urlopen(request) as response:
        print(response.read().decode("utf-8"))
