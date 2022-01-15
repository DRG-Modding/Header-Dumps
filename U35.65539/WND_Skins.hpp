#ifndef UE4SS_SDK_WND_Skins_HPP
#define UE4SS_SDK_WND_Skins_HPP

class UWND_Skins_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ButtonHover;
    UWidgetAnimation* WindowAppear;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBorder* Border_1;
    UUI_FocusableCanvas_C* ItemsWindow;
    UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    UITM_SkinIcon_C* SelectedViewer;
    UButton* SelectorButton;
    UUniformGridPanel* SkinGrid;
    UTextBlock* SkinLabel;
    UItemID* ItemID;
    TArray<UITM_SkinItem_C*> SkinWidgets;
    int32 Columns;
    bool MouseHovering;
    int32 MaxColumns;
    bool LeftToRight;
    int32 PreviewCount;
    FWND_Skins_CPingSkin PingSkin;
    void PingSkin(UItemSkin* Skin);
    UPlayerCharacterID* CharaterID;
    bool SkinHasNotification;
    EItemSkinType SkinType;
    FWND_Skins_COnOpened OnOpened;
    void OnOpened();
    bool HighlightFirstItem;
    UItemSkin* DefaultSkin;

    UItemSkin* SelectSkinOrEquipped(UItemSkin* InSkinbool CallFunc_IsValid_ReturnValue, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UItemSkin* CallFunc_GetEquippedSkin_ReturnValue);
    void RefreshLoadout();
    void ClearSkins(UITM_SkinItem_C* Skin, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, UITM_SkinItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void OnUnlockedSkin(UItemSkin* SkinItem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetWindowVisible_VisibilityChanged, bool CallFunc_SetWindowVisible_NewVisibility, UITM_SkinItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void RefreshSelectorButton(UItemSkin* EquippedSkin, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UItemSkin* CallFunc_GetEquippedSkin_ReturnValue);
    void RefreshWindowItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UITM_SkinItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void GetItemsWindow(UWidget*& Widget);
    void UpdateBorder(bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable_2, bool Temp_bool_Variable_2, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsWindowVisible_Visible, uint8 K2Node_Select_Default, uint8 K2Node_Select_Default_1, float K2Node_Select_Default_2, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor);
    void IsWindowVisible(bool& Visible, UWidget* CallFunc_GetItemsWindow_Widget, bool CallFunc_IsVisible_ReturnValue);
    void PopulateSkinWindow(bool& isEmpty, TArray<UItemSkin*> LockedSkins, UItemSkin* CurrentSkin, TArray<UItemSkin*> Skins, UFSDPlayerState* PlayerState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<UItemSkin*>& CallFunc_GetEquippableColorSkins_ReturnValue, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue_1, UItemSkin* CallFunc_GetEquippedSkin_ReturnValue, UItemSkin* CallFunc_GetBaseColorSkinForMeshSkin_ReturnValue, UItemSkin* CallFunc_GetDefaultItemSkin_ReturnValue, UItemSkin* Temp_object_Variable, int32 CallFunc_Array_Length_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, bool CallFunc_IsLocked_ReturnValue, UItemSkin* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, UItemSkin* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Min_ReturnValue, UItemSkin* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue, TSubclassOf<AItem> CallFunc_GetItemClass_ReturnValue, UITM_SkinItem_C* CallFunc_AddSkin_OutSkinWidget, TArray<UItemSkin*>& CallFunc_GetSkinsForItem_ReturnValue);
    void SetWindowVisible(bool IsVisible, bool& VisibilityChanged, bool& NewVisibility, bool Changed, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, UWidget* CallFunc_GetItemsWindow_Widget, UItemSkin* CallFunc_GetEquippedSkin_ReturnValue, bool CallFunc_IsVisible_ReturnValue, UWidget* CallFunc_GetItemsWindow_Widget_1, UWidget* CallFunc_GetItemsWindow_Widget_2, UWidget* CallFunc_GetItemsWindow_Widget_3, bool CallFunc_IsVisible_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void AddSkin(UItemSkin* InSkin, TSubclassOf<AActor> InItem, TSubclassOf<UPlayerCharacter> InPlayerCharacter, int32 InIndex, UITM_SkinItem_C*& OutSkinWidget, UUniformGridSlot* GridItem, UITM_SkinItem_C* Widget, bool Temp_bool_Variable, UItemID* CallFunc_GetItemID_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UCategoryID* K2Node_Select_Default, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, TArray<UObject*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, int32 K2Node_Select_Default_1, int32 CallFunc_Divide_IntInt_ReturnValue, UItemID* CallFunc_GetItemID_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, UITM_SkinItem_C* CallFunc_Create_ReturnValue);
    void SetSkinData(UItemID* itemClass, UPlayerCharacterID* PlayerCharacterClass);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void OnSkinWidgetAdded(UITM_SkinItem_C* SkinWidget);
    void OnSkinClicked(UITM_SkinItem_C* Item);
    void BndEvt__SelectorButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__SelectorButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void OnHoveringSkin(UITM_SkinItem_C* SkinItem);
    void PreviewSkin(UItemSkin* Skin);
    void OnUnhoveringSkin(UITM_SkinItem_C* SkinItem);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__UI_FocusableCanvas_K2Node_ComponentBoundEvent_3_OnHoverChanged__DelegateSignature(UWidget* Widget, bool IsHovered);
    void OnSkinChangedEvent_Event_0();
    void ExecuteUbergraph_WND_Skins(int32 EntryPoint, bool CallFunc_PopulateSkinWindow_IsEmpty, GenericSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, UItemID* K2Node_CustomEvent_itemClass, UPlayerCharacterID* K2Node_CustomEvent_PlayerCharacterClass, bool K2Node_Event_IsDesignTime, bool CallFunc_SetWindowVisible_VisibilityChanged, bool CallFunc_SetWindowVisible_NewVisibility, bool CallFunc_SetWindowVisible_VisibilityChanged_1, bool CallFunc_SetWindowVisible_NewVisibility_1, bool CallFunc_IsWindowVisible_Visible, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_SkinItem_C* K2Node_CustomEvent_SkinWidget, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UITM_SkinItem_C* K2Node_CustomEvent_Item, bool CallFunc_IsWindowVisible_Visible_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetWindowVisible_VisibilityChanged_2, bool CallFunc_SetWindowVisible_NewVisibility_2, UFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsItemOwned_ReturnValue, UITM_SkinItem_C* K2Node_CustomEvent_SkinItem_1, UItemSkin* K2Node_CustomEvent_Skin, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, FText CallFunc_Format_ReturnValue, UItemSkin* CallFunc_SelectSkinOrEquipped_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UITM_SkinItem_C* K2Node_CustomEvent_SkinItem, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, UITM_SkinItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_SetWindowVisible_VisibilityChanged_3, bool CallFunc_SetWindowVisible_NewVisibility_3, OnSkinClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_GetAnimationCurrentTime_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UWidget* CallFunc_GetItemsWindow_Widget, FFocusEvent K2Node_Event_InFocusEvent, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SetWindowVisible_VisibilityChanged_4, bool CallFunc_SetWindowVisible_NewVisibility_4, bool CallFunc_Not_PreBool_ReturnValue_2, UWidget* K2Node_ComponentBoundEvent_Widget, bool K2Node_ComponentBoundEvent_IsHovered, OnUnhovering__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_PopulateSkinWindow_IsEmpty_1, UITM_SkinItem_C* CallFunc_AddSkin_OutSkinWidget, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_2, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, OnHovering__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3);
    void OnOpened__DelegateSignature();
    void PingSkin__DelegateSignature(UItemSkin* Skin);
}

#endif
