#ifndef UE4SS_SDK_Popup_GearUpgrade_Buy_HPP
#define UE4SS_SDK_Popup_GearUpgrade_Buy_HPP

class UPopup_GearUpgrade_Buy_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UTextBlock* TEXT_Purchase;
    class UTextBlock* TEXT_UpgradeName;
    class UVerticalBox* VerticalBox_Cost;
    class UItemUpgrade* Upgrade;
    TSubclassOf<class AActor> Item;
    class AFSDPlayerState* Player;
    class UAudioComponent* ShoutAudioComponent;
    bool HasAllUpgradesForItem;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    void Show(TSubclassOf<class AActor> Item, class UItemUpgrade* Upgrade);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Back();
    void Buy();
    void OnClosed();
    void ExecuteUbergraph_Popup_GearUpgrade_Buy(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, FText CallFunc_TextToUpper_ReturnValue, int32 Temp_int_Array_Index_Variable_3, TSubclassOf<class AActor> K2Node_CustomEvent_Item, class UItemUpgrade* K2Node_CustomEvent_Upgrade, TArray<FCraftingCost>& CallFunc_GetUpgradeCost_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CanAffordUpgrade_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UITM_Craft_ResourceSmall_C* CallFunc_Create_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetSelectedCharacter_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, class UAudioComponent* CallFunc_PlayPitchedByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, int32 Temp_int_Array_Index_Variable_4, FCraftingCost CallFunc_Array_Get_Item, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, class UUpgradableItemComponent* CallFunc_GetComponentFromClass_ReturnValue_1, FUpgradeTier CallFunc_Array_Get_Item_1, FUpgradeTier CallFunc_Array_Get_Item_2, class UItemUpgrade* CallFunc_Array_Get_Item_3, class UItemUpgrade* CallFunc_Array_Get_Item_4, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue, EItemUpgradeStatus CallFunc_GetItemUpgradeStatus_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<class APlayerCharacter> CallFunc_GetObjectClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_2, class UItemID* CallFunc_GetItemID_ReturnValue);
};

#endif
