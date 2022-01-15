#ifndef UE4SS_SDK_UI_MissionComplete_CombinedRewardLine_HPP
#define UE4SS_SDK_UI_MissionComplete_CombinedRewardLine_HPP

class UUI_MissionComplete_CombinedRewardLine_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimCount;
    UTextBlock* AmountLabel;
    UTextBlock* DescriptionLabel;
    UImage* IconImage;
    FText Description;
    bool Uppercase Description;
    int32 Amount;
    UTexture2D* Icon;
    FLinearColor IconTint;
    float CountProgress;
    int32 PreviousAmount;
    UUI_MissionComplete_RewardColumn_C* Column;
    int32 currentAmount;
    int32 Size;

    void GetAmount(int32& Amount);
    void SetIcon(UTexture2D* Texture, FLinearColor TextureTint, bool CallFunc_IsValid_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetAmount(int32 Value, FText CallFunc_Conv_IntToText_ReturnValue);
    void SetDescription(const FText& InText, bool InUpperCase, bool Temp_bool_Variable, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void BeginCount(UUI_MissionComplete_RewardColumn_C* InColumn, float Duration);
    void SetCountProgress(float InProgress);
    void ExecuteUbergraph_UI_MissionComplete_CombinedRewardLine(int32 EntryPoint, float CallFunc_Divide_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, UUI_MissionComplete_RewardColumn_C* K2Node_CustomEvent_InColumn, float K2Node_CustomEvent_Duration, float CallFunc_Divide_FloatFloat_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_CustomEvent_InProgress, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 CallFunc_FFloor_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue);
}

#endif
