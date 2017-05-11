#!/bin/bash

# Maybe entered through Sublime build.
if [ -f "$1" ]; then
	tmp=${1##*/}
	problem=${tmp%.*}
	cd ..
else
	problem=$1
fi

# Check if problem name is valid.
if [[ "${problem}" =~ [^a-zA-Z0-9] ]]; then

    echo "Error: Invalid problem name ${problem}."
    exit 1
fi

# Check if command is valid.
if [ "$#" -ne 1 ]; then
    echo "Usage: $0 problem" >&2
    exit 1
fi

# Check if source file already exists.
if [ -f "src/${problem}.cpp" ]; then
	# Compile.
	make bin/${problem}.out

	# Check if compilation was successful.
	if [ $? -ne 0 ]; then
		echo "Error: Failed to compile src/${problem}.cpp, skipping samples."
		exit 1
	fi

	# Check if directory already exists.
	if [ ! -d "samples/${problem}" ]; then
	    echo "Downloading samples..."
	    # Initialize download location.
		mkdir samples/${problem}

		# Download samples from Kattis.
		wget https://open.kattis.com/problems/${problem}/file/statement/samples.zip

		# Check if download was successful.
		if [ $? -ne 0 ]; then
		    echo "Error: Failed to download samples for problem ${problem}, cleaning up..."
		    rm -r samples/${problem}
		    exit 1
		fi

		# Unzip samples.
		echo "Unzipping samples..."
		unzip samples.zip -d samples/${problem}

		# Clean up zip.
		rm samples.zip
	fi

	echo "Running samples..."
	for input in samples/${problem}/*.in; do
		output=${input%.in}.ans
		echo "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
		echo "------------------------------------------"
		echo "Sample input file: ${input##*/}"
		echo "------------------------------------------"

		bin/${problem}.out < ${input}

		if [ -f "${output}" ]; then
			echo "------------------------------------------"
			echo "Sample output file: ${output##*/}"
			echo "------------------------------------------"

			cat ${output}
		fi
	done
	echo "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"
	echo "Done."
else
   	echo "Setting up code template..."
	cp template.cpp src/${problem}.cpp

	echo "Opening Sublime..."
	subl src/${problem}.cpp

	echo "Done."
fi