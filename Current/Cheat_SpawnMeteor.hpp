#ifndef UE4SS_SDK_Cheat_SpawnMeteor_HPP
#define UE4SS_SDK_Cheat_SpawnMeteor_HPP

class UCheat_SpawnMeteor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Label_C* Basic_Label_83;
    class UButton* Button_MeteorShower;
    class UButton* Button_SpawnMeteor;
    class UCheckBox* Check_SpawnOnMe;
    class USpinBox* DelayTime;
    class UButton* StopMeteors;
    class UTextBlock* TextBlock;
    class UTextBlock* TextBlock_1;
    FCheat_SpawnMeteor_CBosco spawn requested Bosco spawn requested;
    void Bosco spawn requested();
    FVector ChosenLocation;
    TSubclassOf<class ABP_MeteorShowerTimer_C> MeteorShowerClass;

    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void SpawnMeteor(FVector Location, bool SpawnOnMe);
    void BndEvt__Cheat_SpawnMeteor_Button_MeteorShower_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SpawnMeteorShower(FVector Location, bool SpawnOnMe);
    void BndEvt__Cheat_SpawnMeteor_StopMeteors_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SpawnMeteor(int32 EntryPoint);
    void Bosco spawn requested__DelegateSignature();
};

#endif
