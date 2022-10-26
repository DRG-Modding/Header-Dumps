#ifndef UE4SS_SDK_HUD_Event_PlagueMeteor_HPP
#define UE4SS_SDK_HUD_Event_PlagueMeteor_HPP

class UHUD_Event_PlagueMeteor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig;
    class UProgressBar* DefenseProgress;
    class UHUD_DefaultLabel_C* Failure;
    class UProgressBar* Filled;
    class UProgressBar* Filled_1;
    class UHUD_DefaultLabel_C* Header;
    class UWidgetSwitcher* StateSwitcher1;
    class UWidgetSwitcher* StateSwitcher2;
    class UHUD_DefaultLabel_C* Sucess_Done;
    class UVerticalBox* VerticalBox_Complete;
    class UVerticalBox* VerticalBox_Failure;
    class UVerticalBox* VerticalBox_InProgress;
    class AEVENT_MeteorDefence_C* Event;
    FLinearColor ProgressColor;
    FText HeaderText;
    FLinearColor NoDefenderColor;
    FLinearColor HasDefenderColor;
    FText SuccesText;
    TArray<class UWidgetSwitcher*> Pods;
    int32 Active Arrows;
    class AEVENT_MeteorDefence_C* Event_0;
    float MinHealth;

    void Update Pod UI(int32 WorkingCount);
    void Construct();
    void ProgressUpdated(float NewProgress);
    void PreConstruct(bool IsDesignTime);
    void BrokenCountUpdated(int32 WorkingCount);
    void success();
    void failed();
    void Finished();
    void OnHealthChanged_Event_0(float Health);
    void ExecuteUbergraph_HUD_Event_PlagueMeteor(int32 EntryPoint);
};

#endif
