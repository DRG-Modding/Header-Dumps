#ifndef UE4SS_SDK_WND_Trading_DailyDeal_HPP
#define UE4SS_SDK_WND_Trading_DailyDeal_HPP

class UWND_Trading_DailyDeal_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonCutCorner_C* B_Trade;
    class UBlurBackground_C* BlurBackground;
    class UImage* DailyDealHeadline_BG;
    class UImage* I_PosterOutline;
    class UImage* Icon_Refresh;
    class UITM_Trading_DailyDeal_C* ITM_DailyDeal2;
    class UImage* MineralTraderHeadline_Outline;
    class UOverlay* Overlay_DealHolder;
    class UOverlay* Overlay_SoldOut;
    class UTextBlock* Text_;
    class UTextBlock* Text_TimeToNext;
    class UVerticalBox* V_DailyDeal;
    FRandomStream RandomStream;
    FTimerHandle Timer;
    FDailyDeal CurrDeal;
    FWND_Trading_DailyDeal_COnDealBought OnDealBought;
    void OnDealBought();

    void FormatDailyDealResources(TMap<UResourceData*, int32>& Resources, TMap<UResourceData*, int32> Result, const class UResourceData* Temp_object_Variable, const class UResourceData* Temp_object_Variable_1, FDailyDeal CallFunc_GetDailyDeal_outDeal, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1);
    void No_D21FAC5A44FF696C3525F18876AC316A();
    void Yes_D21FAC5A44FF696C3525F18876AC316A();
    void PreConstruct(bool IsDesignTime);
    void Refresh();
    void UpdateTime();
    void BndEvt__B_Trade_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void Construct();
    void OnResourceAmountChanged(class UResourceData* Resource, float currentAmount);
    void OnCreditsChanged(int32 Credits);
    void ExecuteUbergraph_WND_Trading_DailyDeal(int32 EntryPoint, class UITM_Trading_DailyDeal_C* CallFunc_Create_ReturnValue, FExecuteUbergraph_WND_Trading_DailyDealK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_WND_Trading_DailyDealK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FYesNoPromptSettings K2Node_MakeStruct_YesNoPromptSettings, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FExecuteUbergraph_WND_Trading_DailyDealK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, FExecuteUbergraph_WND_Trading_DailyDealK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_BuyDailyDeal_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UResourceData* K2Node_CustomEvent_resource, float K2Node_CustomEvent_currentAmount, int32 CallFunc_GetCredits_ReturnValue, int32 K2Node_CustomEvent_Credits, FDailyDeal CallFunc_GetDailyDeal_outDeal, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, FExecuteUbergraph_WND_Trading_DailyDealK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, float CallFunc_GetResourceAmount_ReturnValue, bool CallFunc_IsDailyDealBought_ReturnValue, FDateTime CallFunc_UtcNow_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Max_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_IntToText_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Max_ReturnValue_2, FText CallFunc_Conv_IntToText_ReturnValue_2, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, TMap<UResourceData*, int32> CallFunc_FormatDailyDealResources_Resources, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UYesNoPromptAction* CallFunc_PromptPurchase_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
    void OnDealBought__DelegateSignature();
};

#endif
