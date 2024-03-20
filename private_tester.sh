#!/bin/bash

# Function to generate a random list of integers within a specified range
generate_random_list() {
  local num=$1
    local min=$2
    local max=$3
    local range=$((max - min + 1))
    for ((i = 0; i < num; i++)); do
        echo -n $((min + RANDOM*RANDOM*RANDOM*RANDOM*RANDOM % range))
        # Add a space after each number, but not after the last number
        if (( i < num - 1 )); then
            echo -n " "
        fi
    done
    # Add a newline at the end
    echo
}

# Function to display header
display_header() {
    # ANSI escape code for yellow
    local yellow='\033[1;33m'
    # ANSI escape code to reset color
    local reset='\033[0m'

    echo
    echo -e "${yellow}"
    echo "+---------------------------------------------------------------+"
    echo "|                    push_swap tester script                    |"
    echo "+---------------------------------------------------------------+"
    echo -e "${reset}"
    echo
}

# Function to display list of integers in a nice box format
display_integer_list() {
    local blue='\033[1;34m'
    local reset='\033[0m'

    echo -e "${blue}"
    echo "Generated List of Integers: "
   for ((i = 0; i < ${#integers_array[@]}; i++)); do
        echo -n "${integers_array[i]}"
        # Add a comma after each number, but not after the last number
        if (( i < ${#integers_array[@]} - 1 )); then
            echo -n ", "
        fi 
    done
    echo -e "${reset}"
    echo
}

# Display the header
display_header

# Prompt user for the number of integers
read -p "Enter the number of integers to generate: " num_integers
echo

# Range of integers (adjust as needed)
min=-10000  # Minimum integer value
max=10000  # Maximum integer value

# Generate random list of integers
random_integers=$(generate_random_list $num_integers $min $max)

# Convert the list of integers into an array
read -r -a integers_array <<< "$random_integers"

# Display the list of integers in a nice box
display_integer_list
echo
# Run push_swap with the generated list of integers as arguments
output=$(./push_swap "${integers_array[@]}")
echo

#echo "$output"

#line_count=$(echo "$output" | wc -l)
#line_count=$((line_count - 2))

#echo
#echo "Number of moves: $line_count"
#echo

# Run checker with the generated list of integers as arguments
checker_output=$(echo "$output" | ./checker_linux "${integers_array[@]}")

# Check if sorting is successful
if [[ $checker_output == "OK" ]]; then
   	echo -e "\033[0;32mList sorted \xE2\x9C\x94\033[0m"  # Green checkmark
    echo "Number of moves: $(echo "$output" | wc -l)"
	echo
else
    echo -e "\033[0;31mSorting failed\033[0m"  # Red color
	echo
fi
