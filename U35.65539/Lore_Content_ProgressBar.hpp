#ifndef UE4SS_SDK_Lore_Content_ProgressBar_HPP
#define UE4SS_SDK_Lore_Content_ProgressBar_HPP

class ULore_Content_ProgressBar_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    UTextBlock* MainText;
    UProgressBar* ProgressBar_156;
    FText HeaderText;
    float NewVal;
    float StartTime;
    float OldVal;
    float ChangeTime;

    void SetProgress(int32 Progress);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Lore_Content_ProgressBar(int32 EntryPoint, int32 K2Node_CustomEvent_progress, bool K2Node_Event_IsDesignTime, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetRealTimeSeconds_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Lerp_ReturnValue);
}

#endif
