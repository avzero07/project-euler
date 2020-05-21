from subprocess import run, PIPE

path2bin = "./largestPalindromeProduct"

def test_case1():
    p = run([path2bin], stdout=PIPE, input="91 99\n", encoding="ascii")
    print(p.stdout)

    check = "9009\n"
    assert check==p.stdout

def test_case2():
    p = run([path2bin], stdout=PIPE, input="34 222\n", encoding="ascii")
    check = "-1\n"
    # stderr contains the Error Message
    # stdout Prints the Error Number
    assert check==p.stdout

def test_case3():
    p = run([path2bin], stdout=PIPE, input="23 23\n", encoding="ascii")
    print(p.stdout)

    check = "9009\n"
    assert check==p.stdout
