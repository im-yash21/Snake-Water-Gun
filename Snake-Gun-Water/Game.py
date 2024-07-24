import random
print("Welcome To The Game")
p,c = 0,0
def Game():
        global p,c
        print("Enter no. which you want to choose")
        print("1.Snake \n2.Water \n3.Gun")
        x = int(input())
        y = random.randint(1,3)
        print(f"Computer chooses : {y}")
        if x==1:
            if y==1:
                print("Match Draw")
            elif y==2:
                print("Snake Defeats Water \nYou wins")
                p += 1
            else:
                print("Snake Not Defeats Gun \nComputer wins") 
                c += 1
        elif x==2:
            if y==1:
                print("Water Not Defeats Snake \nComputer Wins")
                c += 1
            elif y==2:
                print("Match Draw")
            else:
                print("Water Defeats \nYou Wins") 
                p += 1
        elif x==3:
            if y==1:
                print("Gun Defeats Snake \nYou Wins")
                p += 1
            elif y==2:
                print("Gun Not Defeats Water \nComputer Wins")
                c += 1
            else:
                print("Match Draw")  
        else:
            print("You entered wrong no. please choose again")
            Game()
        while True :    
                print("Choose \n1.Play again \n2.Exit and see points \n3.Exit only")
                flag  = int(input())   
                if flag == 1:
                    Game()
                elif flag == 2:
                    print(f"Your point :{p} \nComputer Points :{c}")
                    exit() 
                elif flag == 3: exit() 
                else :
                    print("You entered wrong no. please choose again")
Game()                        