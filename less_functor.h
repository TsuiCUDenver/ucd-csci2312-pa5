//Christina Tsui

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

namespace CS2312 {

    //Template less
    template<typename T>
    class less {
    public:

        bool operator()(const T &first, const T &second){return ( first < second );}
    };

    //Specialize (type std::string)
    template<>
    class less<std::string> {
    public:

        bool operator()(const std::string &first, const std::string &second){return ( first < second );}
    };

    //Specialize (char *)
    template<>
    class less<char *> {
    public:

        bool operator()(const char *first, const char *second)
        {

            string string1, string2;

            string1 = first;
            string2 = second;

            return ( string1 < string2 );
        };
    };
}
#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H
