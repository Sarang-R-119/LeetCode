class ParkingSystem {
    
    int big;
    int medium;
    int small;
    
public:
    ParkingSystem(int big, int medium, int small) : big(big), medium(medium), small(small){
       //Member assignment
        /* this->big = big;
        this->medium = medium;
        this->small = small;*/
    }
    
    bool addCar(int carType) {
        switch(carType) {
            case 1:
                if(big){
                    big--;
                    return true;
                }
                else return false;
                break;
            case 2:
                if(medium){
                    medium--;
                    return true;
                }
                else return false;
                break;
            case 3:
                if(small){
                    small--;
                    return true;
                }
                else return false;
                break;
            default :
                return false;
                
        }
    } 
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */