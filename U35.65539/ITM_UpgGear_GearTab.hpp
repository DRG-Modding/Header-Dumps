#ifndef UE4SS_SDK_ITM_UpgGear_GearTab_HPP
#define UE4SS_SDK_ITM_UpgGear_GearTab_HPP

class UITM_UpgGear_GearTab_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_0;
    UTextBlock* DATA_GearName;
    UBorder* GearIconBG;
    UImage* ICON_GearFiller;
    UImage* ICON_GearOutline;
    UImage* ICON_Locked;
    UWidgetSwitcher* IconSwitch;
    UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    UBorder* NameBG;
    UOverlay* Overlay_0;
    USizeBox* SizeBox_0;
    UOverlay* UnlockedOverlay;
    bool ItemHovered;
    UUpgradableGearComponent* UpgradableGear;
    FITM_UpgGear_GearTab_COnClicked OnClicked;
    void OnClicked(UITM_UpgGear_GearTab_C* Tab);
    FITM_UpgGear_GearTab_COnHovered OnHovered;
    void OnHovered(UITM_UpgGear_GearTab_C* Tab);
    FITM_UpgGear_GearTab_COnUnhovered OnUnhovered;
    void OnUnhovered(UITM_UpgGear_GearTab_C* Tab);
    TSubclassOf<AActor> itemClass;
    UMENU_UpgradeScreen_C* Menu;
    bool ItemSelected;
    bool HasNewItem;
    TSubclassOf<APlayerCharacter> CharacterClass;

    void UpdateNotification(bool IsItemUnlocked, UItemID* CallFunc_GetItemID_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<UObject*>& K2Node_MakeArray_Array, TArray<UObject*>& K2Node_MakeArray_Array_1, bool CallFunc_CheckItemUINotification_HasNotification, bool CallFunc_CheckItemUINotification_HasNotification_1, bool CallFunc_BooleanOR_ReturnValue, TArray<UObject*>& K2Node_MakeArray_Array_2, bool CallFunc_CheckItemUINotification_HasNotification_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void GetItemClass(TSubclassOf<AActor>& itemClass);
    bool IsItemClass(TSubclassOf<AActor> InItemClassbool CallFunc_EqualEqual_ClassClass_ReturnValue);
    void Refresh(bool ItemUnlocked, FText Temp_text_Variable, bool Temp_bool_Variable, uint8 Temp_byte_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_2, uint8 Temp_byte_Variable_1, uint8 Temp_byte_Variable_2, bool Temp_bool_Variable_3, float Temp_float_Variable_2, float Temp_float_Variable_3, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_4, UTexture2D* CallFunc_GetIconLine_ReturnValue, UItemID* CallFunc_GetItemID_ReturnValue, bool CallFunc_IsItemUnlocked_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select_Default, uint8 K2Node_Select_Default_1, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, uint8 K2Node_Select_Default_2, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, bool CallFunc_BooleanOR_ReturnValue_1, float K2Node_Select_Default_3, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, bool Temp_bool_Variable_5, FSlateColor K2Node_MakeStruct_SlateColor, UWidget* K2Node_Select_Default_4, UTexture2D* CallFunc_GetIconBG_ReturnValue, FText CallFunc_GetGearName_ReturnValue, FText K2Node_Select_Default_5);
    void SetHovered(bool InItemHovered);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void SetSelected(bool ItemSelected);
    void PreConstruct(bool IsDesignTime);
    void OnItemChanged_Event(TSubclassOf<AActor> NewItemClass);
    void OnItemUINotificationChange();
    void Destruct();
    void ExecuteUbergraph_ITM_UpgGear_GearTab(int32 EntryPoint, OnItemChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, ItemUINotificationDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_InItemHovered, bool K2Node_CustomEvent_ItemSelected, bool K2Node_Event_IsDesignTime, TSubclassOf<AActor> K2Node_CustomEvent_NewItemClass, bool CallFunc_EqualEqual_ClassClass_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, ItemUINotificationDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UGameData* CallFunc_GetFSDGameData_ReturnValue, UItemID* CallFunc_GetItemID_ReturnValue, TArray<UObject*>& K2Node_MakeArray_Array);
    void OnUnhovered__DelegateSignature(UITM_UpgGear_GearTab_C* Tab);
    void OnHovered__DelegateSignature(UITM_UpgGear_GearTab_C* Tab);
    void OnClicked__DelegateSignature(UITM_UpgGear_GearTab_C* Tab);
}

#endif
