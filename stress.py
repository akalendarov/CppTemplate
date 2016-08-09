from random import randint, randrange, choice, shuffle
from sys import stderr
from time import time
from subprocess import call

TIME_LIMIT = 2
TASK_NAME = "Debug/CppTemplate.exe"
INPUT_FILE = "input.txt"
OUTPUT_FILE = "output.txt"


def gen():
    f = open(INPUT_FILE, "w")

    f.close()


def run():
    start_time = time()
    print("Started...")

    return_code = call("./" + TASK_NAME)

    if return_code != 0:
        print("Runtime Error, return code", return_code, file=stderr)
        exit(0)

    finish_time = time()
    print("Finished")

    execution_time = finish_time - start_time

    if execution_time > TIME_LIMIT:
        print("Time Limit, execution time", execution_time, file=stderr)
        exit(0)

    print("Accepted")


def solve():
    f = open(INPUT_FILE)
    g = open("correct.txt", "w")

    f.close()
    g.close()


def check():
    if call(["diff", OUTPUT_FILE, "correct.txt"]) != 0:
        print("Wrong Answer", file=stderr)
        exit(0)


def main():
    while True:
        # gen()
        print("lol")
        run()
        print("kek")
        # solve()
        # check()


main()
