#ifndef UE4SS_SDK_BP_PetComponent_HPP
#define UE4SS_SDK_BP_PetComponent_HPP

class UBP_PetComponent_C : public UPetComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FText PetName;
    class UParticleSystem* PetParticles;
    class UParticleSystemComponent* Emitter;

    void ModifyTemperature(class ASpiderEnemy* Pet, int32 CallFunc_Multiply_IntInt_ReturnValue);
    void SetGameplayTags(class AFSDPawn* self2, bool CallFunc_RemoveGameplayTag_ReturnValue);
    void ActivateMaterial(class USkeletalMeshComponent* Mesh, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C(UClass* Loaded);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void OnDeath_Event_0(class UHealthComponentBase* HealthComponent);
    void ReceiveOwningPlayerChanged();
    void ExecuteUbergraph_BP_PetComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, UClass* Temp_class_Variable, TSubclassOf<class UAnimInstance> K2Node_ClassDynamicCast_AsAnim_Instance, bool K2Node_ClassDynamicCast_bSuccess, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent_1, UClass* K2Node_CustomEvent_Loaded, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, FExecuteUbergraph_BP_PetComponentK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UHealthComponentBase* K2Node_CustomEvent_HealthComponent, bool CallFunc_IsValid_ReturnValue_1, FExecuteUbergraph_BP_PetComponentK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_BP_PetComponentK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetOwner_ReturnValue, class ASpiderEnemy* K2Node_DynamicCast_AsSpider_Enemy, bool K2Node_DynamicCast_bSuccess, FVector CallFunc_K2_GetComponentScale_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UBP_PetUseSphere_C* CallFunc_AddPetComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class UEnemyComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const FText CallFunc_GetInGameName_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, FString CallFunc_Conv_TextToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, class UHealthComponentBase* CallFunc_GetHealthComponent_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

#endif
