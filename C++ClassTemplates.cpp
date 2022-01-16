

template<class Tur>
class AddElements
{
    Tur element;
    public:
        AddElements (Tur arg) 
        {
            element=arg;
        }
        Tur add (Tur x)
        {
            return element + x ;
        }           
};

template<>
class AddElements<string>{
    string str;
    public:
        AddElements(string x)
        {
            str = x;
        }
        string concatenate(string s)
        {
            return str + s;
        }
    
};

