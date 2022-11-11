BattleStart: FireBall.o Player.o Target.o SwordSwing.o main.o
	g++ FireBall.o Player.o Target.o SwordSwing.o main.o -o BattleStart
FireBall.o: FireBall.cpp FireBall.h Attack.h
	g++ -c FireBall.cpp
SwordSwing.o: SwordSwing.cpp SwordSwing.h Attack.h
	g++ -c SwordSwing.cpp
Player.o: Player.cpp Player.h
	g++ -c Player.cpp
Target.o: Target.cpp Target.h
	g++ -c Target.cpp
clean:
	rm -f *.o
	rm BattleStart
run: BattleStart
	./BattleStart                    
