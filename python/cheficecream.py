def main():
    test= int(input())
    while test>0:
        n=int(input())
        chef5=0
        chef10=0
        chef15=0
        count=0
        arr = list(map(int,input().strip().split()))[:n] 
        for i in range(n):
            if arr[i]==5:
                chef5+=1
            elif arr[i]==10:
                if chef5>=1:
                    chef5-=1
                    chef10+=1
                else:
                    count+=1
                    break
            elif arr[i]==15:
                if chef5>=2 or chef10>=1:
                    if chef5>=2:
                        chef5-=2
                        chef15+=1
                    else:
                        chef15+=1
                        chef10-=1
                else:
                    count+=1
                    break
        if count==0:
            print('YES')
        else:
            print('NO')
        test-=1
        

if __name__=="__main__":
    main()