

class Box{
    private:
    int l,b,h;
    
    public:   
    Box()
    {
        l=0;
        b=0;
        h=0;
    }
    Box(int e,int f,int g)
    {
        l = e;
        b = f;
        h = g;
        
    }
    Box(const Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return (long long)(b) * l * h;
    }
    bool operator < (Box& B) {
        if (l < B.l) 
        {
            return true;
        } 
        else if (l == B.l && b < B.b ) 
        {
            return true;
        }
        else if (h < B.h && b == B.b && l == B.l) {
            return true;
        }
        else {
         return false;
        }
    } 
};

ostream& operator << (ostream& out, Box& B)
{
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}

