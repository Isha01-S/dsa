def tower_of_hanoi( n, frompeg,  topeg,  auxpeg):
    if (n==1):
        print(f"Move disk 1 from peg {frompeg} to peg {topeg}")
        return

    tower_of_hanoi(n-1,frompeg, auxpeg, topeg)

    print(f"\n move disk {n} from peg {frompeg} to peg {topeg} \n")

    tower_of_hanoi(n-1, auxpeg, topeg, frompeg)

n=int(input("Enter number of disks: "))


tower_of_hanoi(n, 'A', 'C', 'B')

    
