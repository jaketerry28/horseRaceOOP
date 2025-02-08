# horseRaceOOP
horse race using object orientated programming in cpp

## ULM

[![](https://mermaid.ink/img/pako:eNp9UsFOwzAM_ZUop6G1P1Bx3AGkwWEckKAcTOK1EY1TJc4kNPrvtGlpu4HwJXkvz8-2nLNUTqMspGoghJ2ByoMtSfRxAIXi9ivPxZ3zAUcyydLTeSSGyEVgYKOEchRYGGLBHtTHHqni-l8dRZvcw1qVGNE7oA-v9QAeo31bFNvUwOZmzZyc0eIQ6Yft1v0mw7nhPFVuXbgk7neX-I8RtqPTUnmqa8jwZsgxOrvOvdaCPgGpC4935xphwrMhQv_LvPW94x5oTulkJi16C0b3i0tjlZJrtFjKor9qPEJsuJQlDVKI7J4-ScmCfcRMeherWhZHaEKPYquBcVr8zLZAL84tGLVh5x-mrzIc3TffWK8C?type=png)](https://mermaid.live/edit#pako:eNp9UsFOwzAM_ZUop6G1P1Bx3AGkwWEckKAcTOK1EY1TJc4kNPrvtGlpu4HwJXkvz8-2nLNUTqMspGoghJ2ByoMtSfRxAIXi9ivPxZ3zAUcyydLTeSSGyEVgYKOEchRYGGLBHtTHHqni-l8dRZvcw1qVGNE7oA-v9QAeo31bFNvUwOZmzZyc0eIQ6Yft1v0mw7nhPFVuXbgk7neX-I8RtqPTUnmqa8jwZsgxOrvOvdaCPgGpC4935xphwrMhQv_LvPW94x5oTulkJi16C0b3i0tjlZJrtFjKor9qPEJsuJQlDVKI7J4-ScmCfcRMeherWhZHaEKPYquBcVr8zLZAL84tGLVh5x-mrzIc3TffWK8C)

Two classes, Race and Horse. Race has dependencies for Horse.
Race attributes include 2 static constants, TRACKLENGTH and horseNum.
The track will always be 15 characters long.
The race will always be between 5 horses.
Horse attributes include the ID (0-5), trackLength (equal to TRACKLENGTH) and the position of the horse (starts at 0).

## Horse Class Functions

- void advance()

Randomly generates a 50/50 chance of advancing a horses position.

```
import <random>

function advance()
	initialize integer coin and set to value that wont be used

	create random device
	create distributor for integers ranging from 0 to 1 (i.e. 50/50 chance)
	give coin distributor results

	add coin to instance of Horse position
```

- void printLane()

Prints the track of each horse and its current position on the track.

```
static const int TRACKLENGTH is 15

function printLane()
	initialize an string array of size TRACKLENGTH
	for each index of the array
		if the index equals the position of the horse instance
			give that index the horse instance ID
			print the index
		else give that index the "-" character
			print the index

```

- bool isWinner()

Determines if a horse has crossed the finish line and if so, prints out the winner.

```
static const int TRACKLENGTH is 15

function isWinner()
	if the Horse instance position is greater than or equal to the TRACKLENGTH
		print the winner
		return true
	else
		return false
```

## Race Class Functions

- void run()

Starts the race, and loops until a winner is declared, then ends the race.

```
static const int TRACKLENGTH is 15
static const int horseNum is 5

function run()
	for each horse in the race (5)
		create the horse instance with its ID and the tracklength

	initialize boolean keepGoing as true
	while keep going is true
		prompt user to press enter to continue
		for each horse check
			if a horse has won the race
				print the winner
				keepGoing is now false
			else
				print the lane
				give horse chance to advance
```


