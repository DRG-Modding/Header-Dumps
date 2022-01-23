#ifndef UE4SS_SDK_ITM_Wardrobe_ClassSelector_HPP
#define UE4SS_SDK_ITM_Wardrobe_ClassSelector_HPP

class UITM_Wardrobe_ClassSelector_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_0;
    class UBasic_ButtonScalable2_C* BTN_Switch;
    class UTextBlock* DATA_CharacterLevel;
    class UTextBlock* DATA_ClassName;
    class UBorder* HeaderBG;
    class UImage* Image_3;
    class UITM_ItemUnlockedIcon_C* NotificationIcon;
    class UBasic_ScrollArrow_C* ScrollLeft;
    class UBasic_ScrollArrow_C* ScrollRight;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_1;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel_164;
    FText HeaderText;
    class UPlayerCharacterID* CurrentCharacter;
    FITM_Wardrobe_ClassSelector_COnCharacterChanged OnCharacterChanged;
    void OnCharacterChanged(TSubclassOf<class APlayerCharacter> Character);
    ECharselectionCameraLocation SelectionType;
    class UObject* CategoryID;
    bool UpdatePreviewCharacter;
    bool ShowOtherClassesNotifications;

    FEventReply HandleKeyInput(FKeyEvent& InKeyEventbool& Handled, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, TArray<FName>& K2Node_MakeArray_Array, bool CallFunc_IsKeyEventActionAny_ReturnValue, TArray<FName>& K2Node_MakeArray_Array_1, FEventReply CallFunc_Unhandled_ReturnValue, bool CallFunc_IsKeyEventActionAny_ReturnValue_1);
    void SetSwitchButtonState(bool CallFunc_IsValid_ReturnValue, const FText CallFunc_GetSwitchToMessage_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, FText CallFunc_Format_ReturnValue, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void GetPrevCharacter(class UPlayerCharacterID*& Character, TArray<class UPlayerCharacterID*> Heroes, class UGameData* CallFunc_GetFSDGameData_ReturnValue, const TArray<class UPlayerCharacterID*>& CallFunc_GetRankedHeroIDs_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item_1);
    void GetNextCharacter(class UPlayerCharacterID*& Character, TArray<class UPlayerCharacterID*> Heroes, class UGameData* CallFunc_GetFSDGameData_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const TArray<class UPlayerCharacterID*>& CallFunc_GetRankedHeroIDs_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item_1);
    void GetBPGameState(class ABP_GameState_C*& GameState, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess);
    void SetCharacterInfo(class UPlayerCharacterID* characterID, int32 CallFunc_GetHeroLevel_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, const FText CallFunc_GetName_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void SetData(class UPlayerCharacterID* Character, class UObject* CategoryID);
    void BndEvt__ScrollLeft_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__ScrollRight_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void SelectPrev();
    void SelectNext();
    void SwitchToCharacter();
    void Construct();
    void CharacterChanged(TSubclassOf<class APlayerCharacter> NewCharacter);
    void BndEvt__BTN_Switch_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void UpdateNotification();
    void ExecuteUbergraph_ITM_Wardrobe_ClassSelector(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, FText CallFunc_TextToUpper_ReturnValue, class UPlayerCharacterID* K2Node_CustomEvent_character, class UObject* K2Node_CustomEvent_CategoryID, FLinearColor CallFunc_MenuColors_OutputColor, class UPlayerCharacterID* CallFunc_GetNextCharacter_Character, class UPlayerCharacterID* CallFunc_GetPrevCharacter_Character, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_NewCharacter, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class ABP_PlayerController_SpaceRig_C* K2Node_DynamicCast_AsBP_Player_Controller_Space_Rig, bool K2Node_DynamicCast_bSuccess, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess_1, FExecuteUbergraph_ITM_Wardrobe_ClassSelectorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue_1, class UAudioComponent* CallFunc_PlayPitchedByClass_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, FExecuteUbergraph_ITM_Wardrobe_ClassSelectorK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, TArray<class UObject*>& K2Node_MakeArray_Array, bool CallFunc_CheckItemUINotification_HasNotification, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
    void OnCharacterChanged__DelegateSignature(TSubclassOf<class APlayerCharacter> Character);
};

#endif
