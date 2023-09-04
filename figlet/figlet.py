import sys
import random
import subprocess

# List of available fonts
fonts = ["slant", "rectangles", "alphabet", "standard"]

# Function to run figlet with the specified font
def run_figlet(font, text):
    try:
        result = subprocess.run(["figlet", "-f", font, text], stdout=subprocess.PIPE, text=True, check=True)
        return result.stdout
    except subprocess.CalledProcessError:
        return "Error: Invalid usage"

def main():
    # Check the number of command-line arguments
    if len(sys.argv) == 1:
        # No command-line arguments, use a random font
        selected_font = random.choice(fonts)
    elif len(sys.argv) == 3 and (sys.argv[1] == "-f" or sys.argv[1] == "--font") and sys.argv[2] in fonts:
        # Use the specified font
        selected_font = sys.argv[2]
    else:
        # Invalid command-line arguments
        print("Invalid usage")
        sys.exit(1)

    # Prompt the user for input text
    input_text = input("Enter text: ")

    # Run figlet with the selected font
    output = run_figlet(selected_font, input_text)

    # Print the output
    print(output)

if __name__ == "__main__":
    main()
