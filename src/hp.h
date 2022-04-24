#include "hitpointtypes.h"

class hp{
public:
    //return false if set unsuccessfully
    bool setMaxHP(hptype new_max_hp){
        if(new_max_hp < 1)
            return false;
        MaxHP = new_max_hp;
        CurrentHP = MaxHP;
        return true;
    }
    void takedamage(hptype damage){
        if(damage > CurrentHP){
            CurrentHP = 0;
            return;
        }
        CurrentHP -= damage;     
    }
    void heal(hptype amount){
        if( CurrentHP + amount > MaxHP){
            CurrentHP = MaxHP;
            return;
        }
        CurrentHP += amount;
    }
    hptype getCurrentHP(){
        return CurrentHP;
    }
    hptype getMaxHP(){
        return MaxHP;
    }
    
private:
    hptype MaxHP;
    hptype CurrentHP;
};