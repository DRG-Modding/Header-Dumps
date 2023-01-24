#ifndef UE4SS_SDK_HUD_RockCracker_Event_HPP
#define UE4SS_SDK_HUD_RockCracker_Event_HPP

class UHUD_RockCracker_Event_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_RockCracker_Connection_C* Connection_Left;
    class UUI_RockCracker_Connection_C* Connection_Right;
    class UBasic_ProgressBar_C* Meteor_Health;
    class AEVENT_MeteorDefence_C* Event;
    class UFriendlyHealthComponent* Pod1Health;
    class UFriendlyHealthComponent* Pod2Health;
    class APlagueMeteor* meteor;

    void SetMeteorHealth(float InHealth);
    void PodOneHealthChanged(float Health);
    void PodTwoHealthChanged(float Health);
    void MeteorHealthChanged(float CurrentProgress);
    void SetEvent(class AEVENT_MeteorDefence_C* Event);
    void SetState(TEnumAsByte<EMeteorUIState::Type> State);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_RockCracker_Event(int32 EntryPoint);
};

#endif
