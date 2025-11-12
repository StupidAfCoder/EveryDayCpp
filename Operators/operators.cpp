#include <iostream>
#include <ostream>

//We will see how method overloading works which is not present in languages like java!! 
//Basically you can override the cases of operators 

struct Vector2{
    float x , y;
    
    Vector2(float x , float y) : x(x) , y(y) {}

    Vector2 Add(const Vector2& other) const {
        return Vector2(x + other.x , y + other.y);
    }
    Vector2 Multiply(const Vector2& other) const {
        return Vector2(x * other.x , y * other.y);
    }
    Vector2 operator*(const Vector2& other) const {
        return Multiply(other);
    }
    Vector2 operator+(const Vector2& other) const {
        return Add(other);
    }
    bool operator==(const Vector2& other) const {
        return x == other.x && y == other.y;
    }
};

//Here I am changing the << bitwise shift opeator for ostream so that we can print our vector class!!
std::ostream& operator<<(std::ostream& stream , const Vector2& vector ){
    stream << vector.x << " || " << vector.y;
    return stream;
}

int main() {
    Vector2 position(1.0f , 2.4f);
    Vector2 speed(4.0f , 7.0f);
    Vector2 acceleration(2.0f , 1.0f);

    //Without overloading you would have to use the methods directly by calling them so for example:
    Vector2 result1 = position.Add(speed);
    Vector2 result2 = position.Add(speed.Multiply(acceleration));

    //See how in the second result it looks clustered? You can use operators now for these!!
    Vector2 result = position + speed;
    Vector2 result3 = position + speed * acceleration;
    
    //This looks clean!!
    //This way you can change any operator that you would like to change by seeing it's definition!!!
    //Basically operators are like functions so they change accordingly
    std::cout << result3 << std::endl;

    //Also added == operator in Vector!!
    std::cout << (result1 == result2) << std::endl;
    //We added brackets here since the << bitwise opeator has higher precedence!!!
    
    return 0;
}