import random
def main():
    random.seed(1)
    N = 11;
    ls = random.choices(range(1,N,1),k=10)
    print(f"Original list: {ls}")
    ls.sort()
    print(f"result:{ls}")
    return 1
if __name__ == '__main__':
    main()

