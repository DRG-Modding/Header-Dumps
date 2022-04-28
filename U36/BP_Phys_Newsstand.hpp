#ifndef UE4SS_SDK_BP_Phys_Newsstand_HPP
#define UE4SS_SDK_BP_Phys_Newsstand_HPP

class ABP_Phys_Newsstand_C : public ABP_Kickable_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ExecuteUbergraph_BP_Phys_Newsstand(int32 EntryPoint);
};

#endif
