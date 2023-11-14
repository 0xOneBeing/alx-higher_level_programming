#!/usr/bin/node

const SquareImport = require('./5-square');

class Square extends SquareImport {
  charPrint (c) {
    if (c === undefined) {
      c = 'X';
    }

    let i, j;

    for (i = 0; i < this.height; i++) {
      let s = '';
      for (j = 0; j < this.width; j++) {
        s += c;
      }
      console.log(s);
    }
  }
}

module.exports = Square;
