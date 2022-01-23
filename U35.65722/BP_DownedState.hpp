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
    void ExecuteUbergraph_BP_DownedState(int32 EntryPoint, FExecuteUbergraph_BP_DownedStateK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UObject* K2Node_CustomEvent_Loaded_3, FExecuteUbergraph_BP_DownedStateK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class UObject* Temp_object_Variable, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded_2, class UObject* Temp_object_Variable_1, class USoundCue* K2Node_DynamicCast_AsSound_Cue, bool K2Node_DynamicCast_bSuccess_1, class UObject* K2Node_CustomEvent_Loaded_1, class UObject* Temp_object_Variable_2, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_1, bool K2Node_DynamicCast_bSuccess_2, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable_3, class USoundCue* K2Node_DynamicCast_AsSound_Cue_1, bool K2Node_DynamicCast_bSuccess_3, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, const FExecuteUbergraph_BP_DownedStateTemp_delegate_Variable Temp_delegate_Variable, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FExecuteUbergraph_BP_DownedStateK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, FExecuteUbergraph_BP_DownedStateK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
