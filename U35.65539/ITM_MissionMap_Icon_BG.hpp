#ifndef UE4SS_SDK_ITM_MissionMap_Icon_BG_HPP
#define UE4SS_SDK_ITM_MissionMap_Icon_BG_HPP

class UITM_MissionMap_Icon_BG_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* BlinkWarning;
    UImage* bgB;
    UImage* bgB_Warning;
    UImage* bgM;
    UImage* bgM_Warning;
    UImage* bgT;
    UVerticalBox* BGwindow;
    UImage* edgeB;
    UImage* edgeT;

    void PreConstruct(bool IsDesignTime);
    void PlayDoubleWarning();
    void ExecuteUbergraph_ITM_MissionMap_Icon_BG(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
