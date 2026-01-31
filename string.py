def reverse_string(s):
    return s[::-1]

def main():
    text = input("Enter a string: ")
    reversed_text = reverse_string(text)
    print("Reversed string:", reversed_text)

if __name__ == "__main__":
    main()
