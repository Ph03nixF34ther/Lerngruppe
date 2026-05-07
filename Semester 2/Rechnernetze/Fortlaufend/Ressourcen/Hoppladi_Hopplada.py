# Hoppladi Hopplada
# Autor: Elias Niebergall  
# Datum: 20.2.2007

import random as rndm

class Game():
    def setGame (self, Spieler1, Spieler2):
        self.Players = [Spieler1, Spieler2]     # All Players, that play the game
        self.playersTurn = rndm.randint(0,1)    # Determine which player will start by chance
        self.Points = [0, 0]                    # Store how many points each player stored

    def rollDice (Dices):
        # Prepares to roll the dice
        Dice = [0] * Dices  # Array to keep track of the results
        removeDice = True   # Store wether only Carrots were rolled
        Rabbits = 0         # Store how many Rabbits were rolled
        
        # Rolls each dice
        for i in range(DICES):
            result = rndm.randint(1, 6)     # Get random number (1-6)
            if result == 1 or result == 2:  # If a rabbit was scored, increase the counter to see whether the player died this turn
                Rabbits += 1
            if result != 6:                 # If the scored number wasn't a 6: note that not all rolled dice were carrots
                removeDice = False
            Dice[i] = result                # Store the rolled result in an array [int]

        # If only carrots were rolled 
        if removeDice == True:
            DICES_OUT += DICES                                                          # The number of dice that are out of the game are increased
            DICES = 7 - DICES_OUT - (MULITPLICATOR -1 if MULITPLICATOR >= 0 else 0)     # Every other dice is put back in the bucket

        # Check if the player died
        elif Rabbits == 0:
            stopp = True
          
    def playGame(self):
        """
        #SIMULATE THE WHOLE GAME 
        --
        """
        DICES = 7           # Dices to roll with
        DICES_OUT = 0       # Dices taken out by the carrot
        MULITPLICATOR = 0   # Multiplicator
        POINTS = 0          # Points achieved (without the multiplicator)
        while self.points[0] >= 300 or self.points[1] >= 300:

            if self.Players[self.playersTurn].MakeDecission_Stopp(POINTS, MULITPLICATOR, DICES, DICES_OUT) == True:
                DICES = 7           # Dices to roll with
                DICES_OUT = 0       # Dices taken out by the carrot
                MULITPLICATOR = 0   # Multiplicator
                POINTS = 0          # Points achieved (without the multiplicator)

            stopp = False       # Wether the decission to stop has been made

            # Loops through the turns untill it Player wants to stopp
            while not stopp:

                # Else the Player may continue
                else:
                    # Let the player choose their dice
                    ChosenDices, UseTwoAsStack = self.Players[self.playersTurn].chooseDice(POINTS, MULITPLICATOR, Dice, DICES_OUT)

                    OnesChosen = 0      # Counts how often the One has been chosen
                    TwosChosen = 0      # Counts how often the Two has been chosen
                    MultiplicatorUpdated = False    # Checks if the Multiplicator has been Updated this turn

                    for i in range(DICES):
                        if ChosenDices[i] == True:
                            # If the chosen dice has been a Rabbit
                            if Dice[i] == 1:
                                DICES -= 1      # Remove the Dice from the Stack
                                OnesChosen += 1 # Note down the chosen One
                            
                            if Dice[i] == 2:
                                DICES -= 1      # Remove the Dice from the Stack
                                TwosChosen += 1 # Note down the chosen Two

                            # Updating the Multiplicator if allowed
                            if Dice[i] == MULITPLICATOR +1 and 2 <= MULITPLICATOR <= 4 and not MultiplicatorUpdated:
                                DICES -= 1                      # Remove the Dice from the Stack
                                MULITPLICATOR += 1              # Update the Multiplicator
                                MultiplicatorUpdated = True     # Note that the Multiplicator has been updated, since this can only happen once

                    # Set the Multiplicater to two if wished by the Player and allowed
                    if UseTwoAsStack == True and MULITPLICATOR == 0 and OnesChosen + TwosChosen > 1 and TwosChosen > 0:
                        MULITPLICATOR = 2
                        TwosChosen -= 1

                    # Update the points
                    POINTS += TwosChosen * 2 + (OnesChosen // 2) * 10 + OnesChosen % 2

                    # If there are no more dice left to roll, put all dices, that were layed aside back into the game
                    if DICES == 0:
                        DICES = 7 - DICES_OUT - (MULITPLICATOR -1 if MULITPLICATOR >= 0 else 0)

                    # Let the Player decide, wether he wants to stop at this point
                    if self.Players[self.playersTurn].MakeDecission_Stopp(POINTS, MULITPLICATOR, DICES, DICES_OUT) == True:
                        stopp = True
        

class Spieler():
    def __init__ (self, Spielmodus):
        self.Spielmodus = Spielmodus
        self.GamesPlayed = 0

    def makeDecission_Stopp (self, points, multiplikator, dices, dices_out, opponentsState = False):
        return True
    
    def choose_Dice (self, points, multiplikator, dices, dices_out):
        return [True for i in range(len(dices))], False