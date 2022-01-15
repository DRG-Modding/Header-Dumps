#ifndef UE4SS_SDK_UI_AvailablePerkPoints_HPP
#define UE4SS_SDK_UI_AvailablePerkPoints_HPP

class UUI_AvailablePerkPoints_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* PingAnim;
    UTextBlock* AmountText;
    USpacer* IconSpacer;
    UImage* PerkIcon;
    int32 FontSize;
    float Image Size;
    float Spacing;
    float CurrentPerkPoints;
    int32 TargetPerkPoints;
    bool DoCountAnimation;

    void CountPerkPoints(float DeltaTime, float Speed, float FloatTarget, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
    void SetPerkPointsText(int32 Points, FText CallFunc_Conv_IntToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnPerkPointsChanged(int32 PerkPoints, int32 Change);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnPingAnimFinished();
    void ExecuteUbergraph_UI_AvailablePerkPoints(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, PerkPointsChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, FSlateFontInfo K2Node_MakeStruct_SlateFontInfo, FVector2D CallFunc_MakeVector2D_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FVector2D CallFunc_MakeVector2D_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 K2Node_CustomEvent_PerkPoints, int32 K2Node_CustomEvent_Change, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetPerkPoints_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
}

#endif
