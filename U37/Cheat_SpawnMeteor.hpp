#ifndef UE4SS_SDK_Cheat_SpawnMeteor_HPP
#define UE4SS_SDK_Cheat_SpawnMeteor_HPP

class UCheat_SpawnMeteor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    class UCheckBox* Check_SpawnOnMe;
    class USpinBox* DelayTime;
    class UTextBlock* TextBlock;
    FCheat_SpawnMeteor_CBosco spawn requested Bosco spawn requested;
    void Bosco spawn requested();
    FVector ChosenLocation;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void SpawnTargetedMeteor(FVector Location);
    void ExecuteUbergraph_Cheat_SpawnMeteor(int32 EntryPoint);
    void Bosco spawn requested__DelegateSignature();
};

#endif
