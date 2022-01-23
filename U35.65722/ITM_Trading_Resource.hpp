#ifndef UE4SS_SDK_ITM_Trading_Resource_HPP
#define UE4SS_SDK_ITM_Trading_Resource_HPP

class UITM_Trading_Resource_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* GradiantFadeIn;
    class UButton* B_Add;
    class UButton* B_Subtract;
    class UBasic_BG_CutCorner_W_Image_C* Basic_BG_CutCorner_W_Image;
    class UBorder* Border_Glow;
    class UButton* Button_Hover;
    class UImage* CreditsIcon_Buy;
    class UImage* CreditsIcon_Sell;
    class UImage* Icon_Resource;
    class UImage* Image_GradientBackground;
    class UTextBlock* Text_AmountOwned;
    class UTextBlock* Text_BuyPrice;
    class UTextBlock* Text_ResourceName;
    class UTextBlock* Text_SellPrice;
    class UResourceData* Resource;
    int32 ChangeAmout;
    int32 AmountOwned;
    class UITM_Trading_BasketItem_C* TradeBasket;
    FITM_Trading_Resource_CAmoutUpdated AmoutUpdated;
    void AmoutUpdated(bool DoClearAnim, bool DoTradeAnim);
    int32 CreditsLeft;
    bool DoClearAnim;
    bool DoTradeAnim;
    bool OutroPlaying;
    int32 RollCounter;
    FTimerHandle RollCounter_Handle;
    int32 CurrIncrementAmount;

    void UpdateChangeAmount(int32 IncrementAmount, bool& DidUpdate, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4);
    void PreConstruct(bool IsDesignTime);
    void SetData(class UResourceData* Resource, class UITM_Trading_BasketItem_C* TradeBasket);
    void UpdateNumber(bool DoClearAnim, bool DoTradeAnim, float InitialDelay);
    void SetAvailableBalance(int32 CreditsLeft);
    void ClearAmount();
    void UpdateAmountOwned();
    void FadeFinished();
    void BndEvt__Button_Hover_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__B_Add_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__B_Add_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__B_Subtract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__B_Subtract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature();
    void IncrementAmount();
    void Construct();
    void ResourceUpdated(class UResourceData* Resource, float currentAmount);
    void ExecuteUbergraph_ITM_Trading_Resource(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class UResourceData* K2Node_CustomEvent_resource_1, class UITM_Trading_BasketItem_C* K2Node_CustomEvent_TradeBasket, bool K2Node_CustomEvent_DoClearAnim, bool K2Node_CustomEvent_DoTradeAnim, float K2Node_CustomEvent_InitialDelay, FText CallFunc_TextToUpper_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, int32 K2Node_CustomEvent_CreditsLeft, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, float CallFunc_GetOwnedAmount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor_4, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, FExecuteUbergraph_ITM_Trading_ResourceK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FLinearColor CallFunc_MenuColors_OutputColor_5, FLinearColor CallFunc_MenuColors_OutputColor_6, FExecuteUbergraph_ITM_Trading_ResourceK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetOwnedAmount_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue, class USoundBase* Temp_object_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_UpdateChangeAmount_DidUpdate, bool CallFunc_UpdateChangeAmount_DidUpdate_1, class USoundBase* Temp_object_Variable_1, bool CallFunc_UpdateChangeAmount_DidUpdate_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, FExecuteUbergraph_ITM_Trading_ResourceK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class USoundBase* K2Node_Select_Default, FLinearColor CallFunc_MenuColors_OutputColor_7, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, class UResourceData* K2Node_CustomEvent_resource, float K2Node_CustomEvent_currentAmount, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void AmoutUpdated__DelegateSignature(bool DoClearAnim, bool DoTradeAnim);
};

#endif
