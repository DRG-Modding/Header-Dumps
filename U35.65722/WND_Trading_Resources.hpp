#ifndef UE4SS_SDK_WND_Trading_Resources_HPP
#define UE4SS_SDK_WND_Trading_Resources_HPP

class UWND_Trading_Resources_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ButtonCutCorner_C* B_Clear;
    class UBasic_ButtonCutCorner_C* B_Trade;
    class UBorder* B_TradeBasketOutline;
    class UImage* I_BalanceGlow;
    class UImage* Image;
    class UImage* Image_281;
    class UImage* Image_Separator;
    class UTextBlock* Text_;
    class UTextBlock* Text_TotalBalance;
    class UVerticalBox* V_BasketItems;
    class UVerticalBox* V_Trading;
    TArray<class UITM_Trading_Resource_C*> ResourceWidgets;
    int32 count;
    int32 CurrTradeBalance;

    void UpdateAmountAfterDeal(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UITM_Trading_Resource_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Multiply_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void CountTradeResources(const TMap<UResourceData*, int32>& Map, bool& IsBuyingMinerals, int32 ResourceCount, TMap<UResourceData*, int32> Resources, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class UResourceData* Temp_object_Variable, int32 CallFunc_Array_Length_ReturnValue, class UITM_Trading_Resource_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1);
    void OnAmoutUpdated(bool DoClearAnim, bool DoTradeAnim, int32 Balance, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FText CallFunc_Conv_IntToText_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class UITM_Trading_Resource_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UITM_Trading_Resource_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1);
    void No_678F03CB47E4D126FB4FF99BC3F43B71();
    void Yes_678F03CB47E4D126FB4FF99BC3F43B71();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__B_Clear_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void BndEvt__B_Trade_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void ClearAll();
    void OnCreditsChanged(int32 Credits);
    void ExecuteUbergraph_WND_Trading_Resources(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, class UITM_Trading_BasketItem_C* CallFunc_Create_ReturnValue, class UITM_Trading_Resource_C* CallFunc_Create_ReturnValue_1, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, class UResourceData* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Array_Index_Variable_4, bool K2Node_Event_IsDesignTime, FMargin K2Node_MakeStruct_Margin, FLinearColor CallFunc_MenuColors_OutputColor, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, FMargin K2Node_MakeStruct_Margin_1, int32 CallFunc_Array_Add_ReturnValue, FExecuteUbergraph_WND_Trading_ResourcesK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button_1, FExecuteUbergraph_WND_Trading_ResourcesK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UITM_Trading_Resource_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UBasic_ButtonCutCorner_C* K2Node_ComponentBoundEvent_Button, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UDialogDataAsset* Temp_object_Variable, class UITM_Trading_Resource_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Multiply_IntInt_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, class UITM_Trading_Resource_C* CallFunc_Array_Get_Item_3, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_TryBuyResource_Price, bool CallFunc_TryBuyResource_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, class UDialogDataAsset* Temp_object_Variable_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool Temp_bool_Variable, int32 CallFunc_TrySellResource_Price, bool CallFunc_TrySellResource_ReturnValue, int32 Temp_int_Variable_1, FYesNoPromptSettings K2Node_MakeStruct_YesNoPromptSettings, FExecuteUbergraph_WND_Trading_ResourcesK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FText CallFunc_Conv_IntToText_ReturnValue, class UITM_Trading_Resource_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, TMap<UResourceData*, int32> CallFunc_CountTradeResources_Map, bool CallFunc_CountTradeResources_IsBuyingMinerals, float CallFunc_Multiply_IntFloat_ReturnValue, class UDialogDataAsset* K2Node_Select_Default, class UYesNoPromptAction* CallFunc_PromptPurchase_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, FExecuteUbergraph_WND_Trading_ResourcesK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_3, int32 K2Node_CustomEvent_Credits);
};

#endif