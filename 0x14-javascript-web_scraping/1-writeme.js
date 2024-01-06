#!/usr/bin/node

require('fs').writeLine(process.argv[2], process.argv[3], error => {
  if (error) {
    console.log(error);
  }
});
