#!/bin/bash

# Function to generate a random list of integers within a specified range
generate_random_list() {
    local num=$1
    local min=$2
    local max=$3
    local range=$((max - min + 1))
    for ((i = 0; i < num; i++)); do
        echo $((min + RANDOM % range))
    done
}

# Function to display header
display_header() {
    echo "----------------------------------------"
    echo "      Random Integer Generator Script   "
    echo "----------------------------------------"
    echo "Created by pclaus (GitHub: https://github.com/P-Claus)"
    echo "This script generates a random list of integers"
    echo "and runs the push_swap program with those integers."
    echo "----------------------------------------"
    echo
}

# Function to display list of integers in a nice box format
display_integer_list() {
    echo "Generated List of Integers:"
    echo "+---------------------------+"
    for num in "${integers_array[@]}"; do
        printf "| %-25s |\n" "$num"
    done
    echo "+---------------------------+"
}

# Display the header
display_header

# Prompt user for the number of integers
read -p "Enter the number of integers to generate: " num_integers

# Range of integers (adjust as needed)
min=-2147483648  # Minimum integer value
max=2147483647   # Maximum integer value

# Generate random list of integers
random_integers=$(generate_random_list $num_integers $min_int $max_int)

# Convert the list of integers into an array
read -r -a integers_array <<< "$random_integers"

# Display the list of integers in a nice box
display_integer_list

# Run push_swap with the generated list of integers as arguments
output=$(./push_swap "${integers_array[@]}")

# Run checker with the generated list of integers as arguments
checker_output=$(echo "$output" | ./checker_linux "${integers_array[@]}")

# Check if sorting is successful
if [[ $checker_output == "OK" ]]; then
    echo -e "\e[32mList sorted \xE2\x9C\x94\e[0m"  # Green checkmark
    echo "Number of moves: $(echo "$output" | wc -l)"
else
    echo -e "\e[91mError: Sorting failed\e[0m"  # Red color
fi
