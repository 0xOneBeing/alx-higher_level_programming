#!/usr/bin/node

exports.callMeMoby = function (x, theFunction) {
  let i;
  x = 3;

  for (i = 0; i < x; i++) {
    theFunction();
  }
};
