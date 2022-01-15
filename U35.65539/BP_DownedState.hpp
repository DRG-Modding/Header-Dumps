#ifndef UE4SS_SDK_BP_DownedState_HPP
#define UE4SS_SDK_BP_DownedState_HPP

class UBP_DownedState_C : UDownedStateComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    TSoftObjectPtr<UObject> SeeYouInHell_Particles;
    TSoftObjectPtr<UObject> SeeYOuInHell_Charge_Particles;

    void OnLoaded_4C0CAFB9405C60A5642DA2A8AFDA785B(UObject* Loaded);
    void OnLoaded_5277138148709B6872AFA8AE00BD1B01(UObject* Loaded);
    void OnLoaded_EE490F594C2547CD96CB63943EA06475(UObject* Loaded);
    void OnLoaded_369215DE4E9E3D75961755AB344B6937(UObject* Loaded);
    void ReceiveBeginPlay();
    void Receive_TriggerDownedBomb();
    void All_ShowDownedBomb();
    void All_ShowBombIntro();
    void Server_SpawnDBField();
    void ExecuteUbergraph_BP_DownedState(int32 EntryPoint, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UObject* K2Node_CustomEvent_Loaded_3, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UObject* Temp_object_Variable, UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, UObject* K2Node_CustomEvent_Loaded_2, UObject* Temp_object_Variable_1, USoundCue* K2Node_DynamicCast_AsSound_Cue, bool K2Node_DynamicCast_bSuccess_1, UObject* K2Node_CustomEvent_Loaded_1, UObject* Temp_object_Variable_2, UParticleSystem* K2Node_DynamicCast_AsParticle_System_1, bool K2Node_DynamicCast_bSuccess_2, UObject* K2Node_CustomEvent_Loaded, UObject* Temp_object_Variable_3, USoundCue* K2Node_DynamicCast_AsSound_Cue_1, bool K2Node_DynamicCast_bSuccess_3, UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, const AsyncLoadCompleteDelegate__DelegateSignature Temp_delegate_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, OnAssetLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, TSubclassOf<UObject> CallFunc_LoadClassAsset_Blocking_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue);
}

#endif
