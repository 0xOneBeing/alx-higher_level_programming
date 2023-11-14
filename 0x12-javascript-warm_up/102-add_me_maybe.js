#!/usr/bin/node

exports.addMeMaybe = function (number, theFunction) {
  const incrementedNumber = number++;
  theFunction(incrementedNumber);
};
