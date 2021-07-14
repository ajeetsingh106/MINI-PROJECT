# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01|Display of Menu| None | "Menu(1).Tic Tac Toe(2).player 1 (X) player 2 (O)(3)board(4)player 1 or 2(alternate fashion)Enter the choice | PASS | Scenario|
|  H_02|starting of the game |The player should first choose the position to place his symbol | The Board will gets updated and asks for next player for the inputs| PASS | Requirement based |
|  H_03|Show Board | Updates the marks on the board| Displays the progress of the game |SUCCESS|Requirement based |
| H_03_01| Draw| Check if the game will get in  draw situation| show that the Game has been drawn | SUCCESS | Requirement based |
| H_03_02| Win | Check if the game will get in a win situation| show that the Game has been won and the player who has achieved the feat | SUCCESS | Requirement based |
| H_03_03| In Progress | Check if the game is still in progress| show that the Game is still continuing | SUCCESS | Requirement based |
| H_04| Check if irrelevant positions are eliminated (other than 1 to 9) | Say enter "ss" | Displays Invalid option |SUCCESS| Scenario |



## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01|H_02|The game starts and the players will interact with console to place their response| player must the enter a choice for the placing mark on given position| Game in progress| SUCCESS |Requirement based |
|  L_02|H_03|check the progress of the Game|None |show that the Game has been won and by the repected player by returning 1 |SUCCESS | Requirement based |
|  L_02|H_03|check the progress of the Game|None |show that the Game has been drawn by returning 0 |SUCCESS | Requirement based |
|  L_02|H_03|check the progress of the Game|None |show that the Game is in progress by returning -1 |SUCCESS | Requirement based |
