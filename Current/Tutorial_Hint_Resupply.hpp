#ifndef UE4SS_SDK_Tutorial_Hint_Resupply_HPP
#define UE4SS_SDK_Tutorial_Hint_Resupply_HPP

class UTutorial_Hint_Resupply_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UResourceData* ResourceType;
    class UCappedResource* Resource;
    float MinimumAmount;
    float DelayBeforeActive;
    bool HasMinedNitraSinceLastTutorial;
    bool IsTutorialActive;

    void ReceiveOnInitialized();
    void ReceiveOnHidden();
    void ResourceAdded(class UCappedResource* Resource, float Amount);
    void ExecuteUbergraph_Tutorial_Hint_Resupply(int32 EntryPoint);
};

#endif
