#ifndef UE4SS_SDK_BP_PetComponent_HPP
#define UE4SS_SDK_BP_PetComponent_HPP

class UBP_PetComponent_C : UPetComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FText PetName;
    UParticleSystem* PetParticles;
    UParticleSystemComponent* Emitter;

    void ModifyTemperature(USpiderEnemy* Pet, int32 CallFunc_Multiply_IntInt_ReturnValue);
    void SetGameplayTags(UFSDPawn* self2, bool CallFunc_RemoveGameplayTag_ReturnValue);
    void ActivateMaterial(USkeletalMeshComponent* Mesh, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C(TSubclassOf<UObject> Loaded);
    void OnDeath(UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void OnDeath_Event_0(UHealthComponentBase* HealthComponent);
    void ReceiveOwningPlayerChanged();
    void ExecuteUbergraph_BP_PetComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, TSubclassOf<UObject> Temp_class_Variable, TSubclassOf<UAnimInstance> K2Node_ClassDynamicCast_AsAnim_Instance, bool K2Node_ClassDynamicCast_bSuccess, UHealthComponentBase* K2Node_CustomEvent_HealthComponent_1, TSubclassOf<UObject> K2Node_CustomEvent_Loaded, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UHealthComponentBase* K2Node_CustomEvent_HealthComponent, bool CallFunc_IsValid_ReturnValue_1, OnAssetClassLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, DeathSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, AActor* CallFunc_GetOwner_ReturnValue, USpiderEnemy* K2Node_DynamicCast_AsSpider_Enemy, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentScale_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UBP_PetUseSphere_C* CallFunc_AddPetComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, UEnemyComponent* CallFunc_GetComponentByClass_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const FText CallFunc_GetInGameName_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
}

#endif
