#ifndef UE4SS_SDK_CharSelect_HeroSelect_Clean_HPP
#define UE4SS_SDK_CharSelect_HeroSelect_Clean_HPP

class UCharSelect_HeroSelect_Clean_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UICON_HeroSelect_C* ICON_HeroSelect_65;
    UICON_HeroSelect_C* ICON_HeroSelect_C_66;
    UICON_HeroSelect_C* ICON_HeroSelect_C_67;
    UICON_HeroSelect_C* ICON_HeroSelect_C_68;
    UHorizontalBox* SelectionBox;
    FCharSelect_HeroSelect_Clean_COnCharacterSelected OnCharacterSelected;
    void OnCharacterSelected(UPlayerCharacterID* Character);
    UAudioComponent* ShoutAudioComponent;
    FCharSelect_HeroSelect_Clean_COnCharacterHovered OnCharacterHovered;
    void OnCharacterHovered(UPlayerCharacterID* Character);
    bool DoSelectedShouts;
    FCharSelect_HeroSelect_Clean_COnRetirementHovered OnRetirementHovered;
    void OnRetirementHovered(UPlayerCharacterID* Character);
    FCharSelect_HeroSelect_Clean_COnRetirementUnhovered OnRetirementUnhovered;
    void OnRetirementUnhovered(UPlayerCharacterID* Character);
    FCharSelect_HeroSelect_Clean_COnRetireCharacter OnRetireCharacter;
    void OnRetireCharacter(UPlayerCharacterID* Character);
    bool OnlyShowCharactersNotInUse;
    bool CanSelectCharacters;
    bool CanPromote;
    TArray<UICON_HeroSelect_C*> HeroWidgets;

    void HighlightClassChallenge(TArray<UObject*>& ClassRefs, bool ShouldHighlight, USeasonChallenge* challenge, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, UTexture2D* CallFunc_GetIconOutlined_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, UICON_HeroSelect_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, UICON_HeroSelect_C* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_HandleKeyEvent_ReturnValue, bool CallFunc_HandleKeyEvent_Handled);
    void SetSelectedIndex(int32 Index, bool& Valid, TArray<UICON_HeroSelect_C*> Array, UICON_HeroSelect_C* Icon, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, UICON_HeroSelect_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, UWidget* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, UICON_HeroSelect_C* K2Node_DynamicCast_AsICON_Hero_Select, bool K2Node_DynamicCast_bSuccess_1);
    void GetSelectedIndex(int32& Index, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, TArray<UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Max_ReturnValue);
    FEventReply HandleKeyEvent(FKeyEvent& InKeyEvent, bool IsDownbool& Handled, TArray<FName>& K2Node_MakeArray_Array, TArray<FName>& K2Node_MakeArray_Array_1, bool CallFunc_IsKeyEventActionAny_ReturnValue, FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, bool CallFunc_IsKeyEventActionAny_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, FEventReply CallFunc_Handled_ReturnValue_1, FEventReply CallFunc_Unhandled_ReturnValue, FKey CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, FEventReply CallFunc_Handled_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
    void Select();
    void Prev(int32 CallFunc_GetSelectedIndex_Index, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_SetSelectedIndex_Valid);
    void Next(int32 CallFunc_GetSelectedIndex_Index, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_SetSelectedIndex_Valid);
    void OnCharacterSelected_Event(UPlayerCharacterID* Character);
    void Update();
    void BndEvt__BTN_Select_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnHovered_Event_0(UPlayerCharacterID* Character);
    void OnSelect();
    void RetirementHovered(UPlayerCharacterID* Character);
    void RetirementUnHovered(UPlayerCharacterID* Character);
    void RetireCharacter(UPlayerCharacterID* Character);
    void ExecuteUbergraph_CharSelect_HeroSelect_Clean(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UICON_HeroSelect_C* CallFunc_Create_ReturnValue, UPlayerCharacterID* K2Node_CustomEvent_character_4, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UAudioComponent* CallFunc_PlayPitchedByClass_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, OnRetireClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, OnRetirementUnhovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerCharacterID* K2Node_CustomEvent_character_3, UPlayerCharacterID* K2Node_CustomEvent_character_2, UPlayerCharacterID* K2Node_CustomEvent_character_1, UPlayerCharacterID* K2Node_CustomEvent_character, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, TArray<UPlayerCharacterID*>& CallFunc_GetPlayableCharacterIDs_ReturnValue, UPlayerCharacterID* CallFunc_Array_Get_Item, OnRetirementHovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UPlayerCharacterID* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, OnHovered__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, OnCharacterSelected__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_Array_Add_ReturnValue);
    void OnRetireCharacter__DelegateSignature(UPlayerCharacterID* Character);
    void OnRetirementUnhovered__DelegateSignature(UPlayerCharacterID* Character);
    void OnRetirementHovered__DelegateSignature(UPlayerCharacterID* Character);
    void OnCharacterHovered__DelegateSignature(UPlayerCharacterID* Character);
    void OnCharacterSelected__DelegateSignature(UPlayerCharacterID* Character);
}

#endif
