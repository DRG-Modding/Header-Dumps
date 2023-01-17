#ifndef UE4SS_SDK_ITM_DeepDives_ServerList_Entry_HPP
#define UE4SS_SDK_ITM_DeepDives_ServerList_Entry_HPP

class UITM_DeepDives_ServerList_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UButton* Button_0;
    class UUI_GradientMasked_Image_C* GradientBackground;
    class UScaleBox* Modded_Box;
    class UITM_ServerList_Entry_PlayerIcons_C* ServerList_Entry_PlayerIcons;
    class USizeBox* SizeBox_Distance;
    class USizeBox* SizeBox_Mission;
    class USizeBox* SizeBox_Team;
    class UTextBlock* TXT_Distance;
    class UTextBlock* TXT_Modded;
    class UTextBlock* TXT_Region;
    class UTextBlock* TXT_ServerName;
    FBlueprintSessionResult Session;
    FITM_DeepDives_ServerList_Entry_CJoinServer JoinServer;
    void JoinServer(FBlueprintSessionResult Session);
    class UBasic_ToolTip_C* MutatorToolTip;
    class UBasic_ToolTip_C* WarningToolTip;
    class UBiome_ToolTip_C* BiomeToolTip;
    class UImage* Image_Warning_0;
    class UMaterialInstanceDynamic* BiomeMaterial;

    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OpenProfile();
    void SetServername();
    void SetMissionNameWidth(float Width);
    class UWidget* GetMissionToolTip();
    void SetColumnWidths(TArray<float>& InWidths);
    void ToggleMissionDetails(bool Visible, bool& OutVisible);
    void SetNoMission();
    void SetSession(FBlueprintSessionResult Session);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_DeepDives_ServerList_Entry(int32 EntryPoint);
    void JoinServer__DelegateSignature(FBlueprintSessionResult Session);
};

#endif
