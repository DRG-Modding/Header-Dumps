#ifndef UE4SS_SDK_Tutorial_Hint_LowOnAmmo_HPP
#define UE4SS_SDK_Tutorial_Hint_LowOnAmmo_HPP

class UTutorial_Hint_LowOnAmmo_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UResourceData* ResourceType;
    class UCappedResource* Resource;
    float MinimumAmount;
    float DelayBeforeActive;
    bool HasMinedNitraSinceLastTutorial;
    bool IsTutorialActive;

    void ReceiveOnInitialized();
    void OnSupplyStatusChangedEvent(float ammoStatus01, float healthStatus01);
    void OnResourceMined(class UCappedResource* Resource, float Amount);
    void ExecuteUbergraph_Tutorial_Hint_LowOnAmmo(int32 EntryPoint);
};

#endif
