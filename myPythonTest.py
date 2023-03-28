from os import chdir, path 
from sys import argv
chdir(path.dirname(path.abspath(__file__)))

# with open("hhelo.txt","w") as f:
#     f.write(argv[1])
from time import sleep
from os import system
for _ in range(3):
    system('cmd /c "client 10.10.255.82 PYTHON"')
