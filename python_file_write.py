def write_to_file(filename, txt):
    with open(filename, 'w') as file_object:
        s = file_object.write(txt)

if __name__ == '__main__':
    print("Python File Writer Starting.")
    message = str(input("Enter your message: "))
    filename = str=(input("Enter file name: "))
    if filename[-4:] != ".txt":
        filename = filename + ".txt"
    write_to_file(filename, message)
    print("Done!")
