import subprocess

# Function to run figlet.py with the specified font and input text
def run_figlet(font, text):
    try:
        # Run figlet.py with the specified font and input text
        result = subprocess.run(["python", "figlet.py", "-f", font], input=text, capture_output=True, text=True, check=True)
        return result.stdout
    except subprocess.CalledProcessError:
        return "Error: Invalid usage"

# Prompt the user for input text
input_text = input("Enter text: ")

# Determine which font to use based on input
if "CS50" in input_text:
    font = "slant"
elif "Hello, world" in input_text:
    font = "rectangles"
elif "Moo" in input_text:
    font = "alphabet"
else:
    font = "standard"

# Run figlet.py with the determined font and input text
output = run_figlet(font, input_text)

# Print the output
print(output)

