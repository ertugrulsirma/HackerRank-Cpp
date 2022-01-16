

Complex operator + (const Complex X, const Complex Y) 
{
    Complex Z;
    Z.a = X.a + Y.a;
    Z.b = X.b + Y.b;
    return Z;
}

ostream& operator <<(ostream& os, const Complex C) 
{
    return os << C.a << "+i" << C.b;
} 
//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"

