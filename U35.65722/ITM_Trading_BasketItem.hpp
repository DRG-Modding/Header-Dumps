#ifndef UE4SS_SDK_ITM_Trading_BasketItem_HPP
#define UE4SS_SDK_ITM_Trading_BasketItem_HPP

class UITM_Trading_BasketItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Intro;
    class UBorder* Border_ColorGradient;
    class UBorder* Border_Diff;
    class UBorder* Border_Outline;
    class UImage* CreditsDiffIcon;
    class UImage* Icon_Resource_small;
    class UBasic_AnimatedNumber_C* ResourceDiff;
    class UTextBlock* Text_CreditsDiff;
    class UResourceData* Resource;
    int32 ChangeAmout;
    int32 AmountOwned;
    bool DoClearAnim;
    bool DoTradeAnim;
    bool OutroPlaying;

    void PreConstruct(bool IsDesignTime);
    void SetResource(class UResourceData* Resource);
    void UpdateNumber(int32 ChangeAmount, bool DoAnim, bool DoTadeAnim);
    void Construct();
    void OnIntroFinished();
    void ExecuteUbergraph_ITM_Trading_BasketItem(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, class UResourceData* K2Node_CustomEvent_resource, int32 K2Node_CustomEvent_ChangeAmount, bool K2Node_CustomEvent_DoAnim, bool K2Node_CustomEvent_DoTadeAnim, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Abs_Int_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Multiply_IntInt_ReturnValue_1, FText CallFunc_Format_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, FExecuteUbergraph_ITM_Trading_BasketItemK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_IsVisible_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
};

#endif
