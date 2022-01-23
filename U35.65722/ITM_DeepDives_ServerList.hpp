#ifndef UE4SS_SDK_ITM_DeepDives_ServerList_HPP
#define UE4SS_SDK_ITM_DeepDives_ServerList_HPP

class UITM_DeepDives_ServerList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox;
    class UBorder* HeaderBorder;
    class UVerticalBox* ItemsList;
    class UBorder* LockBorder;
    class URichTextBlock* RichTextBlock_237;
    class UVerticalBox* SearchingVBox;
    class USizeBox* Size_Distance;
    class USizeBox* Size_Mission;
    class USizeBox* Size_Team;
    class UTextBlock* TXT_Category_Distance;
    class UTextBlock* TXT_Category_MissionType;
    class UTextBlock* TXT_Category_Team;
    bool ShowHardDeepDives;
    int32 UpdateIndex;
    FITM_DeepDives_ServerList_COnJoinServer OnJoinServer;
    void OnJoinServer(FBlueprintSessionResult Session);

    void UpdateLocked(bool IsLocked, bool CallFunc_GetHasEverCompletedDeepDive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_SetVisibilityIf_IsVisible);
    void JoinServer(FBlueprintSessionResult InSession);
    void FinishUpdate(int32 CallFunc_GetChildrenCount_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void UpdateServer(FBlueprintSessionResult ServerInfo, class UITM_DeepDives_ServerList_Entry_C* Entry, bool CallFunc_IsPlayInEditor_ReturnValue, FUpdateServerK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_DeepDives_ServerList_Entry_C* CallFunc_Create_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_FSDIsEliteDeepDive_ReturnValue, class UITM_DeepDives_ServerList_Entry_C* K2Node_DynamicCast_AsITM_Deep_Dives_Server_List_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_BoolBool_ReturnValue, int32 Temp_int_Variable, EMissionStructure CallFunc_GetMissionStructure_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void BeginUpdate();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnIsUGCAllowed(const class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult);
    void ExecuteUbergraph_ITM_DeepDives_ServerList(int32 EntryPoint, FExecuteUbergraph_ITM_DeepDives_ServerListK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const class APlayerState* K2Node_CustomEvent_CheckedPlayerState, EBlueprintableUserPrivileges K2Node_CustomEvent_CheckedPrivilege, EBlueprintablePrivilegeResults K2Node_CustomEvent_PrivilegeResult, bool K2Node_SwitchEnum_CmpSuccess);
    void OnJoinServer__DelegateSignature(FBlueprintSessionResult Session);
};

#endif
