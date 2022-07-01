#ifndef UE4SS_SDK_OnScreenIndicator_Actor_Nametag_HPP
#define UE4SS_SDK_OnScreenIndicator_Actor_Nametag_HPP

class UOnScreenIndicator_Actor_Nametag_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowSmall_C* Basic_HUD_BracketWindowSmall;
    class UTextBlock* DATA_Class;
    class UTextBlock* DATA_Distance;
    class UTextBlock* DATA_Name;
    class APlayerCharacter* Player;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UpdateName();
    void Construct();
    void OnPlayerNameChanged_Event(FString NewName);
    void Set Player(class APlayerCharacter* Player);
    void PreConstruct(bool IsDesignTime);
    void OnToggleNameplatesEvent_Event_0(bool boolValue);
    void ExecuteUbergraph_OnScreenIndicator_Actor_Nametag(int32 EntryPoint);
};

#endif
