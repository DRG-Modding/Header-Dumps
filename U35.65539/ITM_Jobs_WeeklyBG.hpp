#ifndef UE4SS_SDK_ITM_Jobs_WeeklyBG_HPP
#define UE4SS_SDK_ITM_Jobs_WeeklyBG_HPP

class UITM_Jobs_WeeklyBG_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* ImageL;
    UImage* ImageM;
    UImage* ImageR;
    USizeBox* SizeBoxL;
    USizeBox* SizeBoxM;
    USizeBox* SizeBoxR;
    float Size;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Jobs_WeeklyBG(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
}

#endif
