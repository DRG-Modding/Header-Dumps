#ifndef UE4SS_SDK_MENU_Profiling_HPP
#define UE4SS_SDK_MENU_Profiling_HPP

class UMENU_Profiling_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UScrollBox* ScrollBox_57;

    void Construct();
    void ExecuteUbergraph_MENU_Profiling(int32 EntryPoint);
};

#endif
