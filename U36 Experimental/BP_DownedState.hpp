#ifndef UE4SS_SDK_BP_DownedState_HPP
#define UE4SS_SDK_BP_DownedState_HPP

class UBP_DownedState_C : public UDownedStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSoftObjectPtr<UObject> SeeYouInHell_Particles;
    TSoftObjectPtr<UObject> SeeYOuInHell_Charge_Particles;

    void OnLoaded_4C0CAFB9405C60A5642DA2A8AFDA785B(class UObject* Loaded);
    void OnLoaded_5277138148709B6872AFA8AE00BD1B01(class UObject* Loaded);
    void OnLoaded_EE490F594C2547CD96CB63943EA06475(class UObject* Loaded);
    void OnLoaded_369215DE4E9E3D75961755AB344B6937(class UObject* Loaded);
    void ReceiveBeginPlay();
    void Receive_TriggerDownedBomb();
    void All_ShowDownedBomb();
    void All_ShowBombIntro();
    void Server_SpawnDBField();
    void ExecuteUbergraph_BP_DownedState(int32 EntryPoint);
};

#endif
