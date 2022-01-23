#ifndef UE4SS_SDK_WND_Skins_HPP
#define UE4SS_SDK_WND_Skins_HPP

class UWND_Skins_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ButtonHover;
    class UWidgetAnimation* WindowAppear;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBorder* Border_1;
    class UUI_FocusableCanvas_C* ItemsWindow;
    class UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    class UITM_SkinIcon_C* SelectedViewer;
    class UButton* SelectorButton;
    class UUniformGridPanel* SkinGrid;
    class UTextBlock* SkinLabel;
    class UItemID* ItemID;
    TArray<class UITM_SkinItem_C*> SkinWidgets;
    int32 Columns;
    bool MouseHovering;
    int32 MaxColumns;
    bool LeftToRight;
    int32 PreviewCount;
    FWND_Skins_CPingSkin PingSkin;
    void PingSkin(class UItemSkin* Skin);
    class UPlayerCharacterID* CharaterID;
    bool SkinHasNotification;
    EItemSkinType SkinType;
    FWND_Skins_COnOpened OnOpened;
    void OnOpened();
    bool HighlightFirstItem;
    class UItemSkin* DefaultSkin;

    class UItemSkin* SelectSkinOrEquipped(class UItemSkin* InSkinbool CallFunc_IsValid_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, class UItemSkin* CallFunc_GetEquippedSkin_ReturnValue);
    void RefreshLoadout();
    void ClearSkins(class UITM_SkinItem_C* Skin, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class UITM_SkinItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void OnUnlockedSkin(class UItemSkin* SkinItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetWindowVisible_VisibilityChanged, bool CallFunc_SetWindowVisible_NewVisibility, class UITM_SkinItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void RefreshSelectorButton(class UItemSkin* EquippedSkin, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, class UItemSkin* CallFunc_GetEquippedSkin_ReturnValue);
    void RefreshWindowItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UITM_SkinItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void GetItemsWindow(class UWidget*& Widget);
    void UpdateBorder(bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool Temp_bool_Variable_1, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_2, bool Temp_bool_Variable_2, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsWindowVisible_Visible, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, float K2Node_Select_Default_2, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void IsWindowVisible(bool& Visible, class UWidget* CallFunc_GetItemsWindow_Widget, bool CallFunc_IsVisible_ReturnValue);
    void PopulateSkinWindow(bool& isEmpty, TArray<class UItemSkin*> LockedSkins, class UItemSkin* CurrentSkin, TArray<class UItemSkin*> Skins, class AFSDPlayerState* PlayerState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UItemSkin*>& CallFunc_GetEquippableColorSkins_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue_1, class UItemSkin* CallFunc_GetEquippedSkin_ReturnValue, class UItemSkin* CallFunc_GetBaseColorSkinForMeshSkin_ReturnValue, class UItemSkin* CallFunc_GetDefaultItemSkin_ReturnValue, class UItemSkin* Temp_object_Variable, int32 CallFunc_Array_Length_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, bool CallFunc_IsLocked_ReturnValue, class UItemSkin* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UItemSkin* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Min_ReturnValue, class UItemSkin* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, TSubclassOf<class AItem> CallFunc_GetItemClass_ReturnValue, class UITM_SkinItem_C* CallFunc_AddSkin_OutSkinWidget, TArray<class UItemSkin*>& CallFunc_GetSkinsForItem_ReturnValue);
    void SetWindowVisible(bool IsVisible, bool& VisibilityChanged, bool& NewVisibility, bool Changed, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, class UWidget* CallFunc_GetItemsWindow_Widget, class UItemSkin* CallFunc_GetEquippedSkin_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UWidget* CallFunc_GetItemsWindow_Widget_1, class UWidget* CallFunc_GetItemsWindow_Widget_2, class UWidget* CallFunc_GetItemsWindow_Widget_3, bool CallFunc_IsVisible_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void AddSkin(class UItemSkin* InSkin, TSubclassOf<class AActor> InItem, TSubclassOf<class APlayerCharacter> InPlayerCharacter, int32 InIndex, class UITM_SkinItem_C*& OutSkinWidget, class UUniformGridSlot* GridItem, class UITM_SkinItem_C* Widget, bool Temp_bool_Variable, class UItemID* CallFunc_GetItemID_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UCategoryID* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, TArray<class UObject*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 K2Node_Select_Default_1, int32 CallFunc_Divide_IntInt_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, class UITM_SkinItem_C* CallFunc_Create_ReturnValue);
    void SetSkinData(class UItemID* itemClass, class UPlayerCharacterID* PlayerCharacterClass);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnSkinWidgetAdded(class UITM_SkinItem_C* SkinWidget);
    void OnSkinClicked(class UITM_SkinItem_C* Item);
    void BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void OnHoveringSkin(class UITM_SkinItem_C* SkinItem);
    void PreviewSkin(class UItemSkin* Skin);
    void OnUnhoveringSkin(class UITM_SkinItem_C* SkinItem);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature(class UWidget* Widget, bool IsHovered);
    void OnSkinChangedEvent_Event_0();
    void ExecuteUbergraph_WND_Skins(int32 EntryPoint, bool CallFunc_PopulateSkinWindow_IsEmpty, FExecuteUbergraph_WND_SkinsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, class UItemID* K2Node_CustomEvent_itemClass, class UPlayerCharacterID* K2Node_CustomEvent_PlayerCharacterClass, bool K2Node_Event_IsDesignTime, bool CallFunc_SetWindowVisible_VisibilityChanged, bool CallFunc_SetWindowVisible_NewVisibility, bool CallFunc_SetWindowVisible_VisibilityChanged_1, bool CallFunc_SetWindowVisible_NewVisibility_1, bool CallFunc_IsWindowVisible_Visible, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_SkinItem_C* K2Node_CustomEvent_SkinWidget, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UITM_SkinItem_C* K2Node_CustomEvent_Item, bool CallFunc_IsWindowVisible_Visible_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetWindowVisible_VisibilityChanged_2, bool CallFunc_SetWindowVisible_NewVisibility_2, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsItemOwned_ReturnValue, class UITM_SkinItem_C* K2Node_CustomEvent_SkinItem_1, class UItemSkin* K2Node_CustomEvent_Skin, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, FText CallFunc_Format_ReturnValue, class UItemSkin* CallFunc_SelectSkinOrEquipped_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UITM_SkinItem_C* K2Node_CustomEvent_SkinItem, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, class UITM_SkinItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_SetWindowVisible_VisibilityChanged_3, bool CallFunc_SetWindowVisible_NewVisibility_3, FExecuteUbergraph_WND_SkinsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UWidget* CallFunc_GetItemsWindow_Widget, FFocusEvent K2Node_Event_InFocusEvent, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SetWindowVisible_VisibilityChanged_4, bool CallFunc_SetWindowVisible_NewVisibility_4, bool CallFunc_Not_PreBool_ReturnValue_2, class UWidget* K2Node_ComponentBoundEvent_Widget, bool K2Node_ComponentBoundEvent_IsHovered, FExecuteUbergraph_WND_SkinsK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, UClass* CallFunc_LoadClass_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_PopulateSkinWindow_IsEmpty_1, class UITM_SkinItem_C* CallFunc_AddSkin_OutSkinWidget, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FExecuteUbergraph_WND_SkinsK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3);
    void OnOpened__DelegateSignature();
    void PingSkin__DelegateSignature(class UItemSkin* Skin);
};

#endif
