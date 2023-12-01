#!/usr/bin/python3
"""Script that:
1. takes in a URL,
2. sends a request to the URL and displays the value
3. of the X-Request-Id variable found in the header of the response
4. uses urllib
"""

import sys
import urllib.request

if __name__ == "__main__":
    url = sys.argv[1]

    request = urllib.request.Request(url)
    with urllib.request.urlopen(request) as response:
        print(dict(response.headers).get("X-Request-Id"))
