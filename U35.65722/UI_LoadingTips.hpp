#ifndef UE4SS_SDK_UI_LoadingTips_HPP
#define UE4SS_SDK_UI_LoadingTips_HPP

class UUI_LoadingTips_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeIn;
    class UWidgetAnimation* FadeOut;
    class UBorder* Border_0;
    class UTextBlock* HintCategoryText;
    class UTextBlock* HintDescription;
    class UBorder* HintHolder;
    class UUI_AdvancedLabel_C* HintInputLabel;
    class UHorizontalBox* HorizontalBox_2;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    float Timer;
    float TimeToDisplay;
    bool HasfadedOut;
    int32 ListLength;
    int32 PreviewHintIndex;
    uint8 PreviewInputAs;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Show Hint(int32 Index);
    void OnFadeInFinished();
    void OnFadeOutFinished();
    void ExecuteUbergraph_UI_LoadingTips(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FExecuteUbergraph_UI_LoadingTipsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, TArray<FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, FSlateColor K2Node_MakeStruct_SlateColor, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_CustomEvent_Index, FString CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Clamp_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FTipsTableRow CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, FExecuteUbergraph_UI_LoadingTipsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FText CallFunc_TextToUpper_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_2);
};

#endif
