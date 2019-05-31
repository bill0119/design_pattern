#include<iostream>
using namespace std;

// reference : http://monkeycoding.com/?p=958

// attack
class AttackBehavior{
public:
    virtual void attack(){ cout << "進行攻擊" << endl; }
};

class NormalAttack : public AttackBehavior{
public:
    void attack(){ cout << "進行普通攻擊" << endl; }
};

class MagicAttack : public AttackBehavior{
public:
    void attack(){ cout << "進行魔法攻擊" << endl; }
};

// defend
class DefendBehavior{
public:
    void defend(){ cout << "進行防禦" << endl; }
};

// fly
class FlyBehavior{
public:
    virtual void fly(){ cout << "進行飛行" << endl; }
};

class FlyWithWing : public FlyBehavior{
public:
    void fly(){ cout << "進行飛行" << endl; }
};

class FlyNoWay : public FlyBehavior{
public:
    void fly(){ cout << "不進行飛行" << endl; }
};

class Character{
protected:
    AttackBehavior *m_attackBehavior;
    DefendBehavior *m_defendBehavior;
    FlyBehavior *m_flyBehavior;
public:
    Character(AttackBehavior *, DefendBehavior *, FlyBehavior *);
    void performAttack(){ m_attackBehavior->attack(); }
    void performDefend(){ m_defendBehavior->defend(); }
    void performFly(){ m_flyBehavior->fly(); }
    void setAttackMode(AttackBehavior *atk){ m_attackBehavior = atk; }
    void setFlyMode(FlyBehavior *fly){ m_flyBehavior = fly; }
};

Character::Character(AttackBehavior *attack, DefendBehavior *defend, FlyBehavior *fly){
    m_attackBehavior = attack;
    m_defendBehavior = defend;
    m_flyBehavior = fly;
}

class Warrior : public Character{
public:
    Warrior(AttackBehavior *attack, DefendBehavior *defend, FlyBehavior *fly) : Character(attack, defend, fly){}
};

class Magician : public Character{
public:
    Magician(AttackBehavior *attack, DefendBehavior *defend, FlyBehavior *fly) : Character(attack, defend, fly){}
};

class DragonRider : public Character{
public:
    DragonRider(AttackBehavior *attack, DefendBehavior *defend, FlyBehavior *fly) : Character(attack, defend, fly){}
};

int main() {
    // behavior
    AttackBehavior *attack = new NormalAttack();
    DefendBehavior *defend = new DefendBehavior();
    FlyBehavior *fly1 = new FlyNoWay();
    FlyBehavior *fly2 = new FlyWithWing();

    // game role
    Warrior myWarrior(attack, defend, fly1);
    DragonRider myDragonRider(attack, defend, fly2);

    myWarrior.performAttack();
    myDragonRider.performFly();

    AttackBehavior *attack2 = new MagicAttack();
    myDragonRider.setAttackMode(attack2);
    myDragonRider.performAttack();

    delete attack;
    delete defend;
    delete fly1;
    delete fly2;
    delete attack2;
    return 0;
}
