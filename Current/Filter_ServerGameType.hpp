#ifndef UE4SS_SDK_Filter_ServerGameType_HPP
#define UE4SS_SDK_Filter_ServerGameType_HPP

class UFilter_ServerGameType_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheck_ServerGameType_C* Check_Approved;
    class UCheck_ServerGameType_C* Check_Sandbox;
    class UBasic_ExpandableMenu_C* MenuGameType;
    class UBasic_BoolUserSetting_C* Option_OnlyModdedServers;
    class UCanvasPanel* RootCanvas;
    TArray<class UCheck_ServerGameType_C*> Entries;
    FFilter_ServerGameType_COnSelectionChanged OnSelectionChanged;
    void OnSelectionChanged();
    bool Sandbox;

    void VerifyOnlyModded(EGameType LastClicked);
    void VerifyRules();
    void IsSandBoxMode(bool& SandboxMode);
    void CreateEntries();
    void Reset();
    void GetSelectedGameTypes(TArray<EGameType>& GameTypes);
    void OpenMenu(bool Open);
    void UpdateSubheader();
    void PreConstruct(bool IsDesignTime);
    void OnGameTypeChanged(bool IsChecked, EGameType Gametype);
    void Construct();
    void BndEvt__Basic_BoolUserSetting_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void ExecuteUbergraph_Filter_ServerGameType(int32 EntryPoint);
    void OnSelectionChanged__DelegateSignature();
};

#endif
