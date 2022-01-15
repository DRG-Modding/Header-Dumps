#ifndef UE4SS_SDK_UI_TeamDisplay_HPP
#define UE4SS_SDK_UI_TeamDisplay_HPP

class UUI_TeamDisplay_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    USizeBox* Holder_FriendInvite;
    UITEM_SpaceRig_PersonalCharacterLevel_C* HUD_PlayerClass_SpaceRig;
    UUI_AdvancedLabel_C* InviteLabel;
    UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember;
    UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember_259;
    UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember_575;
    TArray<UITEM_SpaceRig_TeamMember_C*> TeamIcons;
    AFSDGameModeSpaceRig* GameMode;
    bool IsSoloSession;
    bool IsSessionStarted;

    void GetParents(TArray<FString>& Names1, TArray<FString> Names, UWidget* Parent, UPanelWidget* CallFunc_GetParent_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, UPanelWidget* CallFunc_GetParent_ReturnValue_1);
    void GetTeam(TArray<UFSDPlayerState*>& OutTeamMembers, TArray<UFSDPlayerState*> TeamMembers, UPlayerState* MyState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, UPlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void UpdateIcons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsInActiveSession_ReturnValue, UITEM_SpaceRig_TeamMember_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, UITEM_SpaceRig_TeamMember_C* CallFunc_Array_Get_Item_1, TArray<UFSDPlayerState*>& CallFunc_GetTeam_OutTeamMembers, UFSDPlayerState* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, UITEM_SpaceRig_TeamMember_C* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_1);
    void Construct();
    void OnFirstWindowOpened();
    void OnLastWindowClosed();
    void Setup Invite Friends();
    void PreConstruct(bool IsDesignTime);
    void UpdateFriendInviteVisibility();
    void OnPlayerJoined_Event(UFSDPlayerState* PlayerState);
    void OnPlayerLeave_Event(UFSDPlayerState* PlayerState);
    void OnSessionLeaderChanged(const UPlayerState* PlayerState);
    void ExecuteUbergraph_UI_TeamDisplay(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, PlayerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, CurrentLeaderChanged__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, WindowManagerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, TArray<UITEM_SpaceRig_TeamMember_C*>& K2Node_MakeArray_Array, UWindowManager* CallFunc_GetWindowManager_ReturnValue, WindowManagerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, UGameStateBase* CallFunc_GetGameState_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_AnyWindowsOpen_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, UFSDPlayerState* K2Node_CustomEvent_PlayerState_2, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, UFSDPlayerState* K2Node_CustomEvent_PlayerState_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_IsInActiveSession_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_1, bool CallFunc_BooleanAND_ReturnValue_2, UWindowManager* CallFunc_GetWindowManager_ReturnValue_3, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, UFSDGameModeSpaceRig* CallFunc_GetFSDSRGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, const UPlayerState* K2Node_CustomEvent_PlayerState);
}

#endif
