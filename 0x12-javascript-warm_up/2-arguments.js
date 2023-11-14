#!/usr/bin/node

const argsLength = process.argv.length;

if ((argsLength - 2) === 0)
{
	console.log('No argument');
	process.exit(0);
}
else if ((argsLength - 2) === 1)
{
	console.log('Argument found');
	process.exit(0);
}
else
{
	console.log('Arguments found');
	process.exit(0);
}
