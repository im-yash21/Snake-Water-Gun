alert("Welcome To The Game\n")
p = 0
c = 0
Game()
function Game(){ 
    while (true) {
    x = parseInt(prompt("Enter no. which you want to choose\n1.Snake \n2.Water \n3.Gun \n"))
    y = Math.floor(Math.random() * 3) + 1 
    alert(`Computer Chooses : ${y} \n`)
    switch (x)
    {
      case 1:{
      if(y==1){
        alert("Match Draw \n")
      }
      else if(y==2){
        alert("Snake Defeats Water \nYou wins \n")
        p++
      }
      else {
        alert("Snake Not Defeats Gun \nComputer wins \n")
        c++
      }
     break
     }
    case 2:{
      if(y==1){
        alert("Water Not Defeats Snake \nComputer Wins \n")
        c++
      }
      else if (y==2)
      {
       alert("Match Draw \n")
      }
      else{
       alert("Water Defeats \nYou Wins \n")
       p++
      }
break
    }    
    case 3:{
      if(y==1){
        alert("Gun Defeats Snake \nYou Wins \n")
        p++
       }
       else if (y==2)
       {
        alert("Gun Not Defeats Water \nComputer Wins \n")
        c++
       }
       else{
         alert("Match Draw \n")
       }
 break
    }
    default:{
        alert("You entered wrong no. please choose again \n")
        Game()
    }}
     break}
    flag = parseInt(prompt("Choose \n1.Play again \n2.Exit and see points \n3.Exit only \n"))
    if(flag==1){
        Game()
    }
    else if (flag==2)
    {
       alert(`Your point :${p} \nCompter point : ${c}`)
       exit(1)
    }
    else if (flag==3)
    {
        exit(1)
    }
    else{
        alert("You entered wrong no. please choose again \n")
    }
   }