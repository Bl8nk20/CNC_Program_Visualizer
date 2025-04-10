#include <vector>

namespace CNC_Visualizer::DataTypes{
    template <typename T>class Coordinates
    {
    private:
        void convert_radian();
        void convert_degree();
        void convert_absolute();
        void convert_relative();
        std::vector<T> m_absolute_coordinates;
    public:
        Coordinates(/* args */);
        ~Coordinates();
    };
} // namespace CNC_SIM
