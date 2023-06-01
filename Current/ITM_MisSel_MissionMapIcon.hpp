#ifndef UE4SS_SDK_ITM_MisSel_MissionMapIcon_HPP
#define UE4SS_SDK_ITM_MisSel_MissionMapIcon_HPP

class UITM_MisSel_MissionMapIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UBasic_ButtonScalable2_C* BTN_HostPrivate;
    class UBasic_ButtonScalable2_C* BTN_HostPublic;
    class UBasic_ButtonScalable2_C* BTN_Join;
    class UBasic_ButtonScalable2_C* BTN_Solo;
    class UButton* Button_Selection;
    class UBasic_Menu_MinimalWindow_C* ButtonWindow;
    class UITM_SeasonChallengeIcon_C* ChallengeIcon;
    class UOverlay* Content;
    class UImage* ICON_TargetDot;
    class UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic;
    class UITM_Campaign_Icon_C* ITM_Campaign_Icon;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    class UITM_MutatorIcon_C* ITM_MutatorIcon;
    class UITM_MutatorIcon_C* ITM_MutatorIcon_1;
    class UVerticalBox* VerticalBox_Anomalies;
    class UVerticalBox* VerticalBox_Warnings;
    class UITM_MissionMapIcon_LevelLock_C* WDG_LevelLock;
    class UITM_MissionMapIcon_Objective_C* WDG_Resource;
    class UITM_MissionMap_Icon_BG_C* WindowBG;
    class UGeneratedMission* mission;
    class UITM_MisSel_FullBiome_C* BiomeController;
    FLinearColor Tint_MissionIconColor;

    void SetMutators(class UGeneratedMission* Target);
    void SetButtonState(class UBasic_ButtonScalable2_C* Button, bool Enabled, TEnumAsByte<EMissionSelection_Mode::Type> Mode);
    void ShouldEnableSoloButton(bool& Show);
    void ShouldEnableHostButton(bool& Show);
    void ShouldEnableJoinButton(bool& Show);
    void GetPlayerController(class ABP_PlayerController_SpaceRig_C*& AsBP Player Controller Space Rig);
    void SelectOptions();
    void GetActiveSelectionMode(TEnumAsByte<EMissionSelection_Mode::Type>& NewParam);
    void GetNumberOfActiveMissions(TArray<FBlueprintSessionResult>& Array, int32& sessions);
    bool HasMission();
    void SetData(class UGeneratedMission* mission, class UITM_MisSel_FullBiome_C* BiomeController);
    void Reset();
    void Unselect();
    void Construct();
    void ServerUpdate();
    void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Selection_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BTN_Join_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_Host_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__BTN_Solo_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__BTN_HostPublic_K2Node_ComponentBoundEvent_48_OnClicked__DelegateSignature();
    void OnTeamMemberCampaignMissionChangedEvent();
    void ShowChallengeIcon(bool InHighlight, class UTexture2D* Icon, FLinearColor Color);
    void ExecuteUbergraph_ITM_MisSel_MissionMapIcon(int32 EntryPoint);
};

#endif
