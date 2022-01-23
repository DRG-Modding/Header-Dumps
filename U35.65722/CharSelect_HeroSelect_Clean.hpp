#ifndef UE4SS_SDK_CharSelect_HeroSelect_Clean_HPP
#define UE4SS_SDK_CharSelect_HeroSelect_Clean_HPP

class UCharSelect_HeroSelect_Clean_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UICON_HeroSelect_C* ICON_HeroSelect_65;
    class UICON_HeroSelect_C* ICON_HeroSelect_C_66;
    class UICON_HeroSelect_C* ICON_HeroSelect_C_67;
    class UICON_HeroSelect_C* ICON_HeroSelect_C_68;
    class UHorizontalBox* SelectionBox;
    FCharSelect_HeroSelect_Clean_COnCharacterSelected OnCharacterSelected;
    void OnCharacterSelected(class UPlayerCharacterID* Character);
    class UAudioComponent* ShoutAudioComponent;
    FCharSelect_HeroSelect_Clean_COnCharacterHovered OnCharacterHovered;
    void OnCharacterHovered(class UPlayerCharacterID* Character);
    bool DoSelectedShouts;
    FCharSelect_HeroSelect_Clean_COnRetirementHovered OnRetirementHovered;
    void OnRetirementHovered(class UPlayerCharacterID* Character);
    FCharSelect_HeroSelect_Clean_COnRetirementUnhovered OnRetirementUnhovered;
    void OnRetirementUnhovered(class UPlayerCharacterID* Character);
    FCharSelect_HeroSelect_Clean_COnRetireCharacter OnRetireCharacter;
    void OnRetireCharacter(class UPlayerCharacterID* Character);
    bool OnlyShowCharactersNotInUse;
    bool CanSelectCharacters;
    bool CanPromote;
    TArray<class UICON_HeroSelect_C*> HeroWidgets;

    void HighlightClassChallenge(TArray<class UObject*>& ClassRefs, bool ShouldHighlight, class USeasonChallenge* challenge, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UTexture2D* CallFunc_GetIconOutlined_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class UICON_HeroSelect_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, class UICON_HeroSelect_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    void SetSelectedIndex(int32 Index, bool& Valid, TArray<class UICON_HeroSelect_C*> Array, class UICON_HeroSelect_C* Icon, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, class UICON_HeroSelect_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, class UICON_HeroSelect_C* K2Node_DynamicCast_AsICON_Hero_Select, bool K2Node_DynamicCast_bSuccess_1);
    void GetSelectedIndex(int32& Index, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<class UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Max_ReturnValue);
    FEventReply HandleKeyEvent(FKeyEvent& InKeyEvent, bool IsDownbool& Handled, TArray<FName>& K2Node_MakeArray_Array, TArray<FName>& K2Node_MakeArray_Array_1, bool CallFunc_IsKeyEventActionAny_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, bool CallFunc_IsKeyEventActionAny_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue_1, FEventReply CallFunc_Unhandled_ReturnValue, FKey CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, FEventReply CallFunc_Handled_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
    void Select();
    void Prev(int32 CallFunc_GetSelectedIndex_Index, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_SetSelectedIndex_Valid);
    void Next(int32 CallFunc_GetSelectedIndex_Index, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetSelectedIndex_Valid);
    void OnCharacterSelected_Event(class UPlayerCharacterID* Character);
    void Update();
    void BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnHovered_Event_0(class UPlayerCharacterID* Character);
    void OnSelect();
    void RetirementHovered(class UPlayerCharacterID* Character);
    void RetirementUnHovered(class UPlayerCharacterID* Character);
    void RetireCharacter(class UPlayerCharacterID* Character);
    void ExecuteUbergraph_CharSelect_HeroSelect_Clean(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UICON_HeroSelect_C* CallFunc_Create_ReturnValue, class UPlayerCharacterID* K2Node_CustomEvent_character_4, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UAudioComponent* CallFunc_PlayPitchedByClass_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, FExecuteUbergraph_CharSelect_HeroSelect_CleanK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FExecuteUbergraph_CharSelect_HeroSelect_CleanK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UPlayerCharacterID* K2Node_CustomEvent_character_3, class UPlayerCharacterID* K2Node_CustomEvent_character_2, class UPlayerCharacterID* K2Node_CustomEvent_character_1, class UPlayerCharacterID* K2Node_CustomEvent_character, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TArray<class UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, class UPlayerCharacterID* CallFunc_Array_Get_Item, FExecuteUbergraph_CharSelect_HeroSelect_CleanK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UPlayerCharacterID* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FExecuteUbergraph_CharSelect_HeroSelect_CleanK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_CharSelect_HeroSelect_CleanK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Array_Add_ReturnValue);
    void OnRetireCharacter__DelegateSignature(class UPlayerCharacterID* Character);
    void OnRetirementUnhovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnRetirementHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnCharacterHovered__DelegateSignature(class UPlayerCharacterID* Character);
    void OnCharacterSelected__DelegateSignature(class UPlayerCharacterID* Character);
};

#endif
