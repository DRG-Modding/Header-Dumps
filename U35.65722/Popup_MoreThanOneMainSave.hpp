#ifndef UE4SS_SDK_Popup_MoreThanOneMainSave_HPP
#define UE4SS_SDK_Popup_MoreThanOneMainSave_HPP

class UPopup_MoreThanOneMainSave_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FlashingText;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBorder* Border_0;
    class UTextBlock* Header;
    class UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry;
    class UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry;
    class UScrollBox* SaveSlotContainer;
    TArray<class UFSDSaveGame*> MainSaves;
    FPopup_MoreThanOneMainSave_COnOneMainSaveLeft OnOneMainSaveLeft;
    void OnOneMainSaveLeft();
    FString TmpSaveslot;

    void RemoveTempSave(FString CallFunc_GetSaveSlotName_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_DeleteFromDisk_ReturnValue);
    void CreateTempSave(class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue);
    void TransformSavenameByBranch(FString InSavename, FString& Savename, FString CallFunc_GetSteamBranchString_ReturnValue, FString CallFunc_RightChop_ReturnValue, int32 CallFunc_Len_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, FString CallFunc_LeftChop_ReturnValue, FString CallFunc_ToUpper_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Replace_ReturnValue);
    void CreateMainSaveslots(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFSDSaveGame* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_GetSlotLoadedFrom_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_TransformSavenameByBranch_Savename, FText CallFunc_Conv_StringToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_SaveSlot_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    void Reset Color on Non Selected Save(class UFSDSaveGame* SaveSlot, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, class UITM_SaveSlot_Entry_C* K2Node_DynamicCast_AsITM_Save_Slot_Entry, bool K2Node_DynamicCast_bSuccess, FSlateColor K2Node_MakeStruct_SlateColor, FSlateBrush K2Node_MakeStruct_SlateBrush, FButtonStyle K2Node_MakeStruct_ButtonStyle);
    void BindSaveslotEvents(class UITM_SaveSlot_Entry_C* SaveslotWidget, FBindSaveslotEventsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FBindSaveslotEventsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
    void SetColors(FLinearColor CallFunc_MenuColors_OutputColor);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void SaveDeleted(class UFSDSaveGame* save);
    void ExecuteUbergraph_Popup_MoreThanOneMainSave(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UFSDSaveGame* K2Node_CustomEvent_save, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFSDSaveGame* CallFunc_Array_Get_Item);
    void OnOneMainSaveLeft__DelegateSignature();
};

#endif
