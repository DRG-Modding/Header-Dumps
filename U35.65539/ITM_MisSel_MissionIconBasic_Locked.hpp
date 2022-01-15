#ifndef UE4SS_SDK_ITM_MisSel_MissionIconBasic_Locked_HPP
#define UE4SS_SDK_ITM_MisSel_MissionIconBasic_Locked_HPP

class UITM_MisSel_MissionIconBasic_Locked_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Icon_BG;
    UImage* ICON_MissionType;
    UImage* ICON_Outline;
    bool Border;
    bool ThickOutline;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
}

#endif
