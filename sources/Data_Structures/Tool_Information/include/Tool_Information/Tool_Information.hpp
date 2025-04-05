#include <string>
#include <optional>

namespace CNC_SIM::DataTypes{
    
    enum Tool_Type{
        Mill,
        Drill,
        ThreadCutter,
        TurningTool
    };

    class Tool_Information
    {
    public:
        // constructor

        Tool_Information();

        Tool_Information();
        
        ~Tool_Information();        
        
        // getter

        // setter
        
    private:
        static const std::string tool_name;
        static const Tool_Type Type;
        static const float diameter;
        static const int amt_cutter;
        static const float max_vc;
        static const float max_vf;
        static const float max_ap;
    };

} // namespace CNC_SIM
