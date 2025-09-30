#!/bin/bash

# Prompt for a commit message
echo "Enter your commit message: "
read commit_message

# Stage all changes
git add .

# Create the commit with the provided message
git commit -m "$commit_message"

# Push the changes to the remote repository (assuming 'origin' and 'main' or 'master')
git push
