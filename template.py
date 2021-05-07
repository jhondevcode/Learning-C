import sys
import os
from datetime import datetime

def create_workspace(dir):
    try:
        os.mkdir(dir)
    except Exception as e:
        print("El directorio ya existe.")

    try:
        with open(f"{dir}/main.c", "w") as file:
            file.write("#include <stdio.h>\n")
            file.write("#include <stdlib.h>\n\n")
            now = datetime.now()
            file.write(f"/*\n * Generated on: {now.hour}:{now.minute}:{now.second}\n */\n")
            file.write("int main(int argc, char const *argv[]) {\n")
            file.write(f"{' ' * 4}printf(\"Hello world\\n\");\n")
            file.write(f"{' ' * 4}return EXIT_SUCCESS;\n")
            file.write("}\n")
            os.system("clear")
            print("Operation successful")
    except Exception as e:
        print(str(e))


if __name__ == '__main__':
    workspace: str = str(input("workspace: "))
    if len(workspace) > 0:
        create_workspace(workspace)
    else:
        print("Error creating workspace")
