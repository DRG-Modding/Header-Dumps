#ifndef UE4SS_SDK__MENU_DeepDives_HPP
#define UE4SS_SDK__MENU_DeepDives_HPP

class U_MENU_DeepDives_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* B_MainBG;
    class UBasic_Label_C* Data_PageCaption;
    class UBasic_Label_C* Data_ResetTimer;
    class UITM_InfoBox_C* ITM_InfoBox;
    class UMENU_LockedTemplate_C* MENU_LockedTemplate;
    class UMENU_SpaceRigTemplate_C* MenuTemplate;
    class UITM_DeepDives_Join_C* TabPage_Join;
    class UITM_DeepDives_Start_C* TabPage_Start;
    class UWidgetSwitcher* TabSwitcher;
    ESteamServerJoinStatus ServerType;
    class UWidget* ActivePage;
    FTimerHandle UpdateTimeHandle;
    TSoftObjectPtr<UDialogDataAsset> FirstTimeShout;
    class UAudioComponent* AmbianceAudio;

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FText ConvertDurationToText(FTimespan A);
    void SetPage(class UWidget* InPage);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnShown();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__TabPage_Start_K2Node_ComponentBoundEvent_0_OnJoinMission__DelegateSignature(bool EliteDeepDive);
    void BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_1_OnClosedClicked__DelegateSignature();
    void BndEvt__MenuTemplate_K2Node_ComponentBoundEvent_2_OnBackClicked__DelegateSignature();
    void Update Time();
    void OnClosed();
    void First Time Shout();
    void ExecuteUbergraph__MENU_DeepDives(int32 EntryPoint);
};

#endif
