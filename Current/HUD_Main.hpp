#ifndef UE4SS_SDK_HUD_Main_HPP
#define UE4SS_SDK_HUD_Main_HPP

class UHUD_Main_C : public UFSDMainHUDWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeToBlack;
    class UWidgetAnimation* MoveIn;
    class UCanvasPanel* AllCameraModes;
    class UAnnouncement_Controller_C* Announcement_Controller;
    class UCanvasPanel* BottomBar;
    class UScreenOverlay_ShieldDamage_C* BP_HUD_ArmorDamageIndicator;
    class UScreenOverlay_HealthDamage_C* BP_HUD_DamageIndicator;
    class UScreenOverlay_Plague_Build_C* BP_HUD_ScreenOverlay_Plague_Build;
    class UHUD_Altimeter_C* BS_Altimeter_505;
    class UHUD_Chat_C* BS_Chat;
    class UHUD_Flares_C* BS_Flares_330;
    class UHUD_Grenades_C* BS_Grenades_239;
    class UOnScreenIndicator_UsableItem_Simple_C* BS_UsableItem_384;
    class UHUD_WeaponName_C* BS_WeaponName_115;
    class UCanvasPanel* Camera_Canvas;
    class UWidgetSwitcher* CamerModeSwitcher;
    class UCanvasPanel* CenterBar;
    class UHUD_CoolDownManager_C* CoolDownManager;
    class UImage* FadeOverlay;
    class UCanvasPanel* FirstPersonCanvas;
    class UEditableTextBox* HiddenChatHelper;
    class UBasic_HUD_BracketWindowBig_Single_C* Holder_Gadgets;
    class UHUD_ActionHoldProgress_C* HUD_ActionHoldProgress;
    class UHUD_ActivatablePerks_C* HUD_ActivatablePerks;
    class UHUD_BossFight_Manager_C* HUD_BossFight_Manager;
    class UHUD_Countdown_Extraction_C* HUD_Countdown_Extraction_99;
    class UHUD_CrosshairManager_C* HUD_CrosshairManager;
    class UHUD_DamageClass_Indicator_C* HUD_DamageClass_Indicator;
    class UHUD_Directional_Damage_IndicatorV2_C* HUD_Directional_Damage_IndicatorV2;
    class UHUD_EnemyTargeting_C* HUD_EnemyTargeting;
    class UHUD_Flashlight_C* HUD_Flashlight_C_0;
    class UHUD_Frozen_C* HUD_Frozen;
    class UHUD_Itembar_C* HUD_Itembar;
    class UHUD_ItemWheel_C* HUD_ItemWheel;
    class UHUD_JetBootsFuel_Vertical_C* HUD_JetBootsFuel_Vertical;
    class UHUD_Milestone_Manager_C* HUD_KPI_Manager;
    class UHUD_MapTool_C* HUD_MapTool_208;
    class UHUD_MinersManualNotification_Manager_C* HUD_MinersManualNotification_Manager;
    class UMissionControl_MainDialogue_C* HUD_MissionShout;
    class UHUD_MutatorsAndWarnings_3_C* HUD_MutatorsAndWarnings_3;
    class UHUD_ActorContext_Manager_C* HUD_ObjectContext_Manager;
    class UHUD_ObjectivesBox_C* HUD_Objectives;
    class UHUD_Oxygen_C* HUD_Oxygen;
    class UHUD_PlayerDown_C* HUD_PlayerDown;
    class UHUD_PlayerInfo_C* HUD_PlayerInfo;
    class UHUD_Radar2_C* HUD_Radar2;
    class UHUD_Resources_Player_C* HUD_Resources_Player;
    class UHUD_Resources_Team_C* HUD_Resources_Team;
    class UHUD_Seed_C* HUD_Seed_1;
    class UHUD_SentryGunManager_C* HUD_SentryGunManager;
    class UHUD_TeamDisplay_Small_C* HUD_TeamDisplay_Small;
    class UHUD_ThrowCarriable_C* HUD_ThrowCarriable;
    class UHUD_TutorialWidget_C* HUD_TutorialWidget;
    class UHUD_Warning_Manager_C* HUD_Warning_Manager;
    class URetainerBox* Retainer_BottomRight;
    class URetainerBox* Retainer_Chat;
    class URetainerBox* Retainer_Seed;
    class URetainerBox* Retainer_TeamDisplay;
    class URetainerBox* Retainer_UpperLeft;
    class URetainerBox* Retainer_UpperRight;
    class URetainerBox* RetainerBox_0;
    class URetainerBox* RetainerBox_1;
    class URetainerBox* RetainerBox_4;
    class URetainerBox* RetainerBox_DamageClass_Indicator;
    class URetainerBox* RetainerBox_DamageClass_Indicator_1;
    class UHUD_Subtitles_C* Subtitles;
    class UCanvasPanel* TopBar;
    class UUI_FPS_C* UI_FPS;
    class UUI_NetInfo_C* UI_NetInfo;
    class UUI_PlayerSpeaking_List_C* UI_PlayerSpeaking_List;
    class UOnScreenIndicator_UsableItem_WithDescription_C* Usable;
    class UVerticalBox* V_BossFightAndSpeak;
    class UVerticalBox* VBox_Events;
    class UVerticalBox* VBox_Events_Left;
    class UVerticalBox* VerticalBox_EventsAndSpeak;
    class APlayerCharacter* Character;
    bool hudVisible;
    float FPS;
    class UObjective* ObjDummy;
    class UHUDVisibilityGroup* VG_Grenades;
    class UHUDVisibilityGroup* VG_Flares;
    class UHUDVisibilityGroup* VG_Flashlight;
    class UHUDVisibilityGroup* VG_VersionNumber;

    FText Get_TEMPtestSeedText_Text_0();
    void ToggleHUD(bool IsVisible, bool Instant);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Destruct();
    void AllDwarvesDown();
    void OnCameraModeChanged(ECharacterCameraMode NewCameraMode, ECharacterCameraMode OldCameraMode);
    void UpdateCurrentCanvas();
    void OnCharacterStateChanged(ECharacterState NewState);
    void Setup HUD Elements();
    void PushEvent(class UWidget* eventWidget, bool Left);
    void PopEvent(class UWidget* eventWidget, bool Left);
    void BndEvt__HUD_Main_VG_VersionNumber_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible);
    void BndEvt__VG_Flashlight_K2Node_ComponentBoundEvent_2_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible);
    void BndEvt__VG_Flares_K2Node_ComponentBoundEvent_1_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible);
    void BndEvt__VG_Grenades_K2Node_ComponentBoundEvent_0_VisibilityDelegate__DelegateSignature(class UHUDVisibilityGroup* Group, bool IsVisible);
    void RefreshHUDElements();
    void ExecuteUbergraph_HUD_Main(int32 EntryPoint);
};

#endif
