# Algorithm: 

# Inputs: 
The user will just input their choices using a switch case menu. Just plan on using numbers for the case input. Also allowing the users to enter the enemies/test dolls health value beforehand.

# Output: 
The user wins when they kill the test doll and result in a win game event. There is no real lost condition yet. 

# Steps: 
Main Function: 
- Ask about the users name, this will be stores as a local variable and will only come up when printing the final output. 
 - Let the user make a choice using a Switch case, this allows the user to pick either sword attack skill, or a fireball skill or a strength skill.
- Regarding what is picked out the specific skills are called in the switch case method. 

Player: 
- Variables like the health of the player, attack value as well as call the other classes called sword swing, fire ball and target using pointer calls. 
- The player has a constructor function which sets the values of the health and the attack value, this is mainly to make sure that the player has a set base attack value.
- The destructor method is mainly to delete the sword skill and the fireball once they are out of scope.
- The swordSkill method is called when the user selects the Sword Attack Ability. In this method we will call the pointer to the sword skill, and pass in the users attack value. Then it will pass the damageNum back to the Target class using the target pointer.  
- The fireballSkill method is the same as the sword skill method but this is called when the user selects the fireball skill. The attack value is passed into the fireball class and the returned damageNum is passed into the Target class using the target Pointer.  
- The buffSkill method is called when the user uses the Strengthen skill, adding an additional 10 attack strength to the users already current attack value. 
- takeDamage method takes periodic damage from the target. Every turn the damage taken by the player is 10 which doesn’t change, but when the player puts the target below half health, the target does 50 damage. This method helps keep track of the players health. 
- conditionLoss is the loss condition that occurs when the user might have zero health. It returns a 1 if the health is 0 or less. 

Target: 
- This class is the target class, the target attacks the user and takes hit from the player. The Target class only has a health variable, and that health is set to a predetermined number.  
- The getHealth function is used to get the health of target and returns the health.  
- conditionWin is the winning condition and is called when the targets health drops below zero. This method is called at the end of the switch in the main to check if the targets health if zero and returns a 1 if its true.  
- status method is used to check the amount of damage that the target has taken from the user. It will take in values from either the sword skill class or the fire ball class and then depending on how much damage is dealt, calculate the final health of the target.

Sword Swing: 
- This class is an extension of the abstract class of the attack class.
- The setAttack method is used to set the attack of the sword swing class to a value which is gotten by the Player class.
- calculateHit is a method which calculates whether the attack hit or just missed completely. In this method, first we calculate the chance of a hit or miss, if it’s a hit then we check if the hit is a crit hit. If it’s a crit then the amount of damage is 2 times the amount of attack. While if it just hits the amount of damage is equal to the attack. If it’s a miss then the damage number is zero.

Fire Ball: 
- The Fireball class is a replica of the sword Swing class all the methods and variables are the same.
- The fireball class is also an extension of the abstract class called the Attack class. 

Attack:
- The attack is an abstract class
- It has the attack, randomChance, randomCrit and damageNum which are the variables that are going to be needed to calculate the different values in Sword Swing and Fire Ball. 
- setAttack and calculateHit are the void methods that are used by FireBall and SwordSwing. 

