#ifndef UE4SS_SDK_UI_TeamDisplay_HPP
#define UE4SS_SDK_UI_TeamDisplay_HPP

class UUI_TeamDisplay_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* Holder_FriendInvite;
    class UITEM_SpaceRig_PersonalCharacterLevel_C* HUD_PlayerClass_SpaceRig;
    class UUI_AdvancedLabel_C* InviteLabel;
    class UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember;
    class UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember_259;
    class UITEM_SpaceRig_TeamMember_C* ITEM_SpaceRig_TeamMember_575;
    TArray<class UITEM_SpaceRig_TeamMember_C*> TeamIcons;
    class AFSDGameModeSpaceRig* GameMode;
    bool IsSoloSession;
    bool IsSessionStarted;

    void GetParents(TArray<FString>& Names1, TArray<FString> Names, class UWidget* Parent, class UPanelWidget* CallFunc_GetParent_ReturnValue, FString CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue_1);
    void GetTeam(TArray<class AFSDPlayerState*>& OutTeamMembers, TArray<class AFSDPlayerState*> TeamMembers, class APlayerState* MyState, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
    void UpdateIcons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsInActiveSession_ReturnValue, class UITEM_SpaceRig_TeamMember_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UITEM_SpaceRig_TeamMember_C* CallFunc_Array_Get_Item_1, TArray<class AFSDPlayerState*>& CallFunc_GetTeam_OutTeamMembers, class AFSDPlayerState* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class UITEM_SpaceRig_TeamMember_C* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_1);
    void Construct();
    void OnFirstWindowOpened();
    void OnLastWindowClosed();
    void Setup Invite Friends();
    void PreConstruct(bool IsDesignTime);
    void UpdateFriendInviteVisibility();
    void OnPlayerJoined_Event(class AFSDPlayerState* PlayerState);
    void OnPlayerLeave_Event(class AFSDPlayerState* PlayerState);
    void OnSessionLeaderChanged(const class APlayerState* PlayerState);
    void ExecuteUbergraph_UI_TeamDisplay(int32 EntryPoint, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FExecuteUbergraph_UI_TeamDisplayK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_UI_TeamDisplayK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_UI_TeamDisplayK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_UI_TeamDisplayK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, TArray<class UITEM_SpaceRig_TeamMember_C*>& K2Node_MakeArray_Array, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, FExecuteUbergraph_UI_TeamDisplayK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_AnyWindowsOpen_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class AFSDPlayerState* K2Node_CustomEvent_PlayerState_2, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, class AFSDPlayerState* K2Node_CustomEvent_PlayerState_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_IsInActiveSession_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor_1, bool CallFunc_BooleanAND_ReturnValue_2, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_3, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AFSDGameModeSpaceRig* CallFunc_GetFSDSRGameMode_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, const class APlayerState* K2Node_CustomEvent_PlayerState);
};

#endif
