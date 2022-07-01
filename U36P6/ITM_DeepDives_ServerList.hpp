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

    void UpdateLocked();
    void JoinServer(FBlueprintSessionResult InSession);
    void FinishUpdate();
    void UpdateServer(FBlueprintSessionResult ServerInfo);
    void BeginUpdate();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnIsUGCAllowed(const class APlayerState* CheckedPlayerState, EBlueprintableUserPrivileges CheckedPrivilege, EBlueprintablePrivilegeResults PrivilegeResult);
    void ExecuteUbergraph_ITM_DeepDives_ServerList(int32 EntryPoint);
    void OnJoinServer__DelegateSignature(FBlueprintSessionResult Session);
};

#endif
