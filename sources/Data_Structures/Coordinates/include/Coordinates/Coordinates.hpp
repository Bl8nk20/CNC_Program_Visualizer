#include <vector>

namespace CNC_Visualizer::DataTypes{
    template <typename T>class Coordinates
    {
<<<<<<<< HEAD:sources/Data_Structures/Coordinates/include/Coordinates/Coordinates.hpp
    private:
        void convert_radian();
        void convert_degree();
        void convert_absolute();
        void convert_relative();
        std::vector<T> m_absolute_coordinates;
========
>>>>>>>> main:sources/Coordinates/include/Coordinates/Coordinates.hpp
    public:
        Coordinates(/* args */);
        ~Coordinates();
        
    private:
        void convert_radian();
        void convert_degree();
        void convert_absolute();
        void convert_relative();
        std::vector<T> m_absolute_coordinates;
    };
} // namespace CNC_SIM
