#ifndef UE4SS_SDK_ITM_ServerList_Entry_HPP
#define UE4SS_SDK_ITM_ServerList_Entry_HPP

class UITM_ServerList_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UImage* Biome_Icon;
    class UButton* Button_0;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* DotMarker_Complexity;
    class UITM_MisSel_DotMarker_MissionLength_C* DotMarker_Length;
    class UImage* Image_Mutator;
    class UImage* Image_Warning;
    class UImage* IMG_Status;
    class UITM_MisSel_DotMarker_WorkEnvironment_C* ITM_MisSel_DotMarker_WorkEnvironment;
    class UITM_MisSel_MissionIconBasic_C* ITM_MisSel_MissionIconBasic;
    class UOverlay* Overlay_4;
    class UITM_ServerList_Entry_PlayerIcons_C* ServerList_Entry_PlayerIcons;
    class USizeBox* SizeBox_Complexity;
    class USizeBox* SizeBox_Difficulty;
    class USizeBox* SizeBox_Distance;
    class USizeBox* SizeBox_Length;
    class USizeBox* SizeBox_Mission;
    class USizeBox* SizeBox_Team;
    class USizeBox* SizeBox_Time;
    class UTextBlock* Text_Mission;
    class UTextBlock* Text_Modded;
    class UTextBlock* TXT_Distance;
    class UTextBlock* TXT_Friends;
    class UTextBlock* TXT_MissionTime;
    class UTextBlock* TXT_Region;
    class UTextBlock* TXT_ServerName;
    class UVerticalBox* VerticalBox_Mutators;
    class UVerticalBox* VerticalBox_Warnings;
    class UHorizontalBox* WarningMutatorBox;
    FBlueprintSessionResult Session;
    FITM_ServerList_Entry_CJoinServer JoinServer;
    void JoinServer(FBlueprintSessionResult Session);
    class UBasic_ToolTip_C* MutatorToolTip;
    class UBasic_ToolTip_C* WarningToolTip;
    class UBiome_ToolTip_C* BiomeToolTip;
    class UImage* Image_Warning_0;
    class UMaterialInstanceDynamic* BiomeMaterial;
    bool ShowComplexity;
    bool ShowDifficulty;
    bool ShowLength;
    bool ShowTime;
    bool ShowWarningsAndMutators;
    bool FriendsArePlaying;
    FITM_ServerList_Entry_COnHovered OnHovered;
    void OnHovered(class UITM_ServerList_Entry_C* InEntry);
    FITM_ServerList_Entry_COnUnhovered OnUnhovered;
    void OnUnhovered(class UITM_ServerList_Entry_C* InEntry);

    void GetServerID(FString& ID);
    void SetHovered(bool InHovered);
    void OpenProfile();
    void SetServername();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void SetMissionNameWidth(float Width);
    void SetVisibleElements(bool InShowComplexity, bool InShowDifficulty, bool InShowLength, bool InShowTime, bool InShowWarningsAndMutators);
    class UWidget* GetMissionToolTip();
    void SetColumnWidths(TArray<float>& InWidths);
    void ToggleMissionDetails(bool Visible);
    void SetNoMission();
    void SetBiomeIcon(class UBiome* Biome);
    void SetupWarningsMutators(class UGeneratedMission* mission);
    void UpdateMissionTime();
    void SetSession(FBlueprintSessionResult Session);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void CustomEvent_0();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_ServerList_Entry(int32 EntryPoint);
    void OnUnhovered__DelegateSignature(class UITM_ServerList_Entry_C* InEntry);
    void OnHovered__DelegateSignature(class UITM_ServerList_Entry_C* InEntry);
    void JoinServer__DelegateSignature(FBlueprintSessionResult Session);
};

#endif
