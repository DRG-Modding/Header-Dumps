#ifndef UE4SS_SDK_ITM_CharacterSwitcherBar_HPP
#define UE4SS_SDK_ITM_CharacterSwitcherBar_HPP

class UITM_CharacterSwitcherBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    class UBasic_ButtonScalable2_C* BTN_Switch;
    class UTextBlock* DATA_CharacterLevel;
    class UTextBlock* DATA_ClassName;
    class UBorder* HeaderBG;
    class UImage* Image_3;
    class UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    class UBasic_ScrollArrow_C* ScrollLeft;
    class UBasic_ScrollArrow_C* ScrollRight;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_164;
    FText HeaderText;
    class UPlayerCharacterID* CurrentCharacter;
    FITM_CharacterSwitcherBar_COnCharacterChanged OnCharacterChanged;
    void OnCharacterChanged(TSubclassOf<class APlayerCharacter> Character);
    ECharselectionCameraLocation SelectionType;

    FEventReply Handle Key Input(const FKeyEvent& InKeyEventbool& Handled, bool CallFunc_IsKeyEventAction_ReturnValue, TArray<FName>& K2Node_MakeArray_Array, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsKeyEventActionAny_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_1, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsKeyEventActionAny_ReturnValue_1);
    void CheckArmorUnlocks(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UInventoryList* CallFunc_GetInventoryList_ReturnValue, const TArray<class UItemID*>& CallFunc_GetItemList_ReturnValue, class UItemID* CallFunc_Array_Get_Item);
    void GotoNext(bool Next, bool PlaySound, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, class UPlayerCharacterID* CallFunc_GetNextCharacter_Character, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue_1, class UPlayerCharacterID* CallFunc_GetPrevCharacter_Character);
    void SetSwitchButtonState(TSubclassOf<class APlayerCharacter> NewLocalVar_0, bool CallFunc_IsValid_ReturnValue, const FText CallFunc_GetSwitchToMessage_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void GetPrevCharacter(class UPlayerCharacterID*& Character, TArray<class UPlayerCharacterID*> Heroes, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TArray<class UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item_1);
    void GetNextCharacter(class UPlayerCharacterID*& Character, TArray<class UPlayerCharacterID*> Heroes, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, TArray<class UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item_1);
    void SetCharacterInfo(class UPlayerCharacterID* playerClass, int32 CallFunc_GetHeroLevel_ReturnValue, const FText CallFunc_GetName_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
    void SelectPrev();
    void SelectNext();
    void SwitchToCharacter();
    void Construct();
    void CharacterChanged(TSubclassOf<class APlayerCharacter> NewCharacter);
    void BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void UpdateNotification();
    void SetData(class UPlayerCharacterID* Character);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_CharacterSwitcherBar(int32 EntryPoint, FExecuteUbergraph_ITM_CharacterSwitcherBarK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FSlateColor K2Node_MakeStruct_SlateColor, FExecuteUbergraph_ITM_CharacterSwitcherBarK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_NewCharacter, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, class UAudioComponent* CallFunc_PlayPitchedByClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, class UPlayerCharacterID* K2Node_CustomEvent_character, FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime, class UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array, bool CallFunc_CheckItemUINotification_HasNotification, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void OnCharacterChanged__DelegateSignature(TSubclassOf<class APlayerCharacter> Character);
};

#endif
