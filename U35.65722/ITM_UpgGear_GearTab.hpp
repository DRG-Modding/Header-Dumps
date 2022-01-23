#ifndef UE4SS_SDK_ITM_UpgGear_GearTab_HPP
#define UE4SS_SDK_ITM_UpgGear_GearTab_HPP

class UITM_UpgGear_GearTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UTextBlock* DATA_GearName;
    class UBorder* GearIconBG;
    class UImage* ICON_GearFiller;
    class UImage* ICON_GearOutline;
    class UImage* ICON_Locked;
    class UWidgetSwitcher* IconSwitch;
    class UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    class UBorder* NameBG;
    class UOverlay* Overlay_0;
    class USizeBox* SizeBox_0;
    class UOverlay* UnlockedOverlay;
    bool ItemHovered;
    class UUpgradableGearComponent* UpgradableGear;
    FITM_UpgGear_GearTab_COnClicked OnClicked;
    void OnClicked(class UITM_UpgGear_GearTab_C* Tab);
    FITM_UpgGear_GearTab_COnHovered OnHovered;
    void OnHovered(class UITM_UpgGear_GearTab_C* Tab);
    FITM_UpgGear_GearTab_COnUnhovered OnUnhovered;
    void OnUnhovered(class UITM_UpgGear_GearTab_C* Tab);
    TSubclassOf<class AActor> itemClass;
    class UMENU_UpgradeScreen_C* Menu;
    bool ItemSelected;
    bool HasNewItem;
    TSubclassOf<class APlayerCharacter> CharacterClass;

    void UpdateNotification(bool IsItemUnlocked, class UItemID* CallFunc_GetItemID_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array, TArray<class UObject*>& K2Node_MakeArray_Array_1, bool CallFunc_CheckItemUINotification_HasNotification, bool CallFunc_CheckItemUINotification_HasNotification_1, bool CallFunc_BooleanOR_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array_2, bool CallFunc_CheckItemUINotification_HasNotification_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void GetItemClass(TSubclassOf<class AActor>& itemClass);
    bool IsItemClass(TSubclassOf<class AActor> InItemClassbool CallFunc_EqualEqual_ClassClass_ReturnValue);
    void Refresh(bool ItemUnlocked, FText Temp_text_Variable, bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, bool Temp_bool_Variable_3, float Temp_float_Variable_2, float Temp_float_Variable_3, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_4, class UTexture2D* CallFunc_GetIconLine_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue, bool CallFunc_IsItemUnlocked_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float K2Node_Select_Default, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_2, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1, bool CallFunc_BooleanOR_ReturnValue_1, float K2Node_Select_Default_3, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_2, bool Temp_bool_Variable_5, FSlateColor K2Node_MakeStruct_SlateColor, class UWidget* K2Node_Select_Default_4, class UTexture2D* CallFunc_GetIconBG_ReturnValue, FText CallFunc_GetGearName_ReturnValue, FText K2Node_Select_Default_5);
    void SetHovered(bool InItemHovered);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void SetSelected(bool ItemSelected);
    void PreConstruct(bool IsDesignTime);
    void OnItemChanged_Event(TSubclassOf<class AActor> NewItemClass);
    void OnItemUINotificationChange();
    void Destruct();
    void ExecuteUbergraph_ITM_UpgGear_GearTab(int32 EntryPoint, FExecuteUbergraph_ITM_UpgGear_GearTabK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FExecuteUbergraph_ITM_UpgGear_GearTabK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_InItemHovered, bool K2Node_CustomEvent_ItemSelected, bool K2Node_Event_IsDesignTime, TSubclassOf<class AActor> K2Node_CustomEvent_NewItemClass, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, FExecuteUbergraph_ITM_UpgGear_GearTabK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array);
    void OnUnhovered__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab);
    void OnHovered__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab);
    void OnClicked__DelegateSignature(class UITM_UpgGear_GearTab_C* Tab);
};

#endif
