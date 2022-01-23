#ifndef UE4SS_SDK_ITM_UpgGear_TierRow_HPP
#define UE4SS_SDK_ITM_UpgGear_TierRow_HPP

class UITM_UpgGear_TierRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BackBar;
    class UTextBlock* DATA_Level;
    class UBorder* IconColorer;
    class UHorizontalBox* IconsHolder;
    class UImage* LevelIcon;
    class UBorder* LevelLock_BG;
    class UOverlay* LevelLock_Holder;
    class UITM_UpgGear_UpgIconSingle_C* TierIcon;
    FUpgradeTier Tier;
    int32 Index;
    TSubclassOf<class APlayerCharacter> CharacterClass;
    TSubclassOf<class AActor> itemClass;
    bool IsRowLocked;
    TArray<class UITM_UpgGear_UpgIconSingle_C*> UpgradeWidgets;
    class UITM_UpgGear_SideBar_C* UpgradesMenu;
    class UITM_UpgGear_UpgIconSingle_C* PurchaseUpgradeWidget;
    class UDialogDataAsset* ShoutUpgradePurchased;

    void UpdateBackBar(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void SetPurchasedShout(class UDialogDataAsset* InShout);
    bool GetIsRowLocked(class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, bool CallFunc_IsTierUnLocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Initialize Upgrade Widget(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void Refresh();
    void EquipUpgrade(class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget);
    void PurchaseUpgrade(class UITM_UpgGear_UpgIconSingle_C* UpgradeWidget);
    void OnPurchaseConfirmation(bool Yes);
    void Refresh Tier Icon();
    void Unequip Upgrade(class UITM_UpgGear_UpgIconSingle_C* Upgrade);
    void OnUpgradeHovered(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void OnUpgradeUnhovered(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void OnUpgrade Clicked(class UITM_UpgGear_UpgIconSingle_C* Widget);
    void ExecuteUbergraph_ITM_UpgGear_TierRow(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, FExecuteUbergraph_ITM_UpgGear_TierRowK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_UpgGear_TierRowK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, FExecuteUbergraph_ITM_UpgGear_TierRowK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, FSlateColor K2Node_MakeStruct_SlateColor, class UItemUpgrade* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetIsRowLocked_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_UpgGear_UpgIconSingle_C* CallFunc_Create_ReturnValue, FMargin K2Node_MakeStruct_Margin, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, FExecuteUbergraph_ITM_UpgGear_TierRowK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class UItemUpgrade* CallFunc_GetItemUpgrade_Upgrade, TArray<FCraftingCost>& CallFunc_GetUpgradeCost_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UITM_UpgGear_UpgIconSingle_C* K2Node_CustomEvent_Widget_3, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UITM_UpgGear_UpgIconSingle_C* K2Node_CustomEvent_UpgradeWidget_1, class UITM_UpgGear_UpgIconSingle_C* CallFunc_Array_Get_Item_1, bool CallFunc_TryEquipUpgrade_Equipped, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UITM_UpgGear_UpgIconSingle_C* K2Node_CustomEvent_UpgradeWidget, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable, bool CallFunc_TryPurchaseUpgrade_Purchased, ESlateVisibility Temp_byte_Variable_1, bool K2Node_CustomEvent_Yes, bool CallFunc_BooleanAND_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default, class UITM_UpgGear_UpgIconSingle_C* K2Node_CustomEvent_Upgrade, bool CallFunc_TryUnequipUpgrade_Success, int32 Temp_int_Loop_Counter_Variable_1, class UITM_UpgGear_UpgIconSingle_C* K2Node_CustomEvent_Widget_2, EItemUpgradeStatus CallFunc_GetUpgradeStatus_Status, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FLinearColor K2Node_Select_Default_1, class UAudioComponent* CallFunc_PlayPitchedByClass_ReturnValue, class UITM_UpgGear_UpgIconSingle_C* K2Node_CustomEvent_Widget_1, class UITM_UpgGear_UpgIconSingle_C* K2Node_CustomEvent_Widget, EItemUpgradeStatus CallFunc_GetUpgradeStatus_Status_1, ESlateVisibility Temp_byte_Variable_2, bool K2Node_SwitchEnum_CmpSuccess, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility K2Node_Select_Default_2);
};

#endif
