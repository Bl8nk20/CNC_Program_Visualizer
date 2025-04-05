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

        Tool_Information(const std::string& tool_name, 
                        const float& diameter, 
                        const std::optional<int>& amt_cutter,
                        const std::optional<float>& max_vc,
                        const std::optional<float>& max_vf,
                        const std::optional<float>& max_ap);
        
        ~Tool_Information();        
        
        // getter
        std::string get_ToolName();
        Tool_Type get_ToolType();
        float get_Diameter();
        int get_AmtCutter();
        float get_MaxVC();
        float get_MaxVF();
        float get_MaxAP();

        // setter
        void get_ToolName(const std::string& tool_name);
        void get_ToolType(const Tool_Type& tool_type);
        void get_Diameter(const float& diameter);
        void get_AmtCutter(const int& amt_cutter);
        void get_MaxVC(const float& max_vc);
        void get_MaxVF(const float& max_vf);
        void get_MaxAP(const float& max_ap);
        

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
