#ifndef UE4SS_SDK_Popup_ModdedSave_HPP
#define UE4SS_SDK_Popup_ModdedSave_HPP

class UPopup_ModdedSave_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBorder* Border_0;
    UBasic_ButtonScalable_C* Button_Cancel;
    UTextBlock* Header;
    UITM_CreateNewSaveSlot_Entry_C* ITM_CreateNewSaveSlot_Entry;
    UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry;
    UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry;
    UScrollBox* SaveSlotContainer;
    FPopup_ModdedSave_COnModdedSaveLoaded OnModdedSaveLoaded;
    void OnModdedSaveLoaded();
    bool CanCancel;
    FPopup_ModdedSave_COnModdedSaveCancelled OnModdedSaveCancelled;
    void OnModdedSaveCancelled();
    UBasic_ToolTip_C* CancelTooltip;
    bool LoadVanillaSaves;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    UWidget* CancelButtonTooltip(bool CallFunc_IsValid_ReturnValue);
    void SetCanCancel(bool Can, FText OptionalTooltipText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility Temp_byte_Variable, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, UBasic_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue, ESlateVisibility Temp_byte_Variable_1, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AreDeprecatedModsInstalled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void Reset Color on Non Selected Save(UFSDSaveGame* SaveSlot, FString CallFunc_GetName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, UWidget* CallFunc_Array_Get_Item, UITM_SaveSlot_Entry_C* K2Node_DynamicCast_AsITM_Save_Slot_Entry, bool K2Node_DynamicCast_bSuccess, FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush K2Node_MakeStruct_SlateBrush, FButtonStyle K2Node_MakeStruct_ButtonStyle);
    void BindSaveslotEvents(UITM_SaveSlot_Entry_C* SaveslotWidget, OnSaveLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, OnSaveDeleted__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, OnSaveDetails__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2);
    void SetColors(FLinearColor CallFunc_MenuColors_OutputColor);
    void Set Create New Saveslot Entry(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, bool CallFunc_GetIsEnabled_ReturnValue, OnSaveslotCreated__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ESlateVisibility K2Node_Select_Default, int32 CallFunc_GetMaxSaveSlots_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_GetAvailableUserSlotIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnSaveDeleted();
    void OnSaveLoaded();
    void OnSaveCreated();
    void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
    void Cancel();
    void ExecuteUbergraph_Popup_ModdedSave(int32 EntryPoint, FText Temp_text_Variable, FText Temp_text_Variable_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TArray<UFSDSaveGame*>& CallFunc_GetAllSavesFromDisk_ReturnValue, int32 Temp_int_Loop_Counter_Variable, UFSDSaveGame* CallFunc_Array_Get_Item, bool CallFunc_GetIsModded_ReturnValue, FString CallFunc_GetSlotLoadedFrom_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool Temp_bool_Variable_1, UITM_SaveSlot_Entry_C* CallFunc_Create_ReturnValue, ESlateVisibility Temp_byte_Variable, UPanelSlot* CallFunc_AddChild_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Select_Default, FText K2Node_Select_Default_1, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AreDeprecatedModsInstalled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default_2);
    void OnModdedSaveCancelled__DelegateSignature();
    void OnModdedSaveLoaded__DelegateSignature();
}

#endif
