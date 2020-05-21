from subprocess import run, PIPE

path2bin = "./findLargePrime"

def test_case1():
    p = run([path2bin], stdout=PIPE, input="10\n", encoding="ascii")
    print(p.stdout);

    check = "5\n"
    assert p.stdout==check

def test_case2():
    p = run([path2bin], stdout=PIPE, input="13195\n", encoding="ascii")
    print(p.stdout);

    check = "29\n"
    assert p.stdout==check

def test_case3():
    p = run([path2bin], stdout=PIPE, input="1000\n", encoding="ascii")
    print(p.stdout);

    check = "5\n"
    assert p.stdout==check

def test_case4():
    p = run([path2bin], stdout=PIPE, input="16\n", encoding="ascii")
    print(p.stdout);

    check = "2\n"
    assert p.stdout==check

def test_case5():
    p = run([path2bin], stdout=PIPE, input="1\n", encoding="ascii")
    print(p.stdout);

    check = "1\n"
    assert p.stdout==check
