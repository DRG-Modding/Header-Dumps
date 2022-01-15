#ifndef UE4SS_SDK_ITM_AnyRetiredRequirement_HPP
#define UE4SS_SDK_ITM_AnyRetiredRequirement_HPP

class UITM_AnyRetiredRequirement_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_73;
    bool RequirementMet;

    void Construct();
    void ExecuteUbergraph_ITM_AnyRetiredRequirement(int32 EntryPoint);
}

#endif
