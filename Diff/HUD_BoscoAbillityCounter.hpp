#ifndef UE4SS_SDK_HUD_BoscoAbillityCounter_HPP
#define UE4SS_SDK_HUD_BoscoAbillityCounter_HPP

class UHUD_BoscoAbillityCounter_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* FlareBox;
    TArray<class UHUD_BoscoAbillityIcon_C*> Icons;
    bool Loaded;

    void CreateIcons(int32 IconCount);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnItemsLoaded();
    void OnAbillityChargeProgress(float aProgress, int32 aNextIndex);
    void OnBoscoChanged(class ABosco* Bosco);
    void OnAbilityDataUpdated_Event_0(class UBoscoAbillityComponent* ability);
    void ExecuteUbergraph_HUD_BoscoAbillityCounter(int32 EntryPoint);
};

#endif
