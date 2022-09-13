#ifndef UE4SS_SDK_BP_PetComponent_HPP
#define UE4SS_SDK_BP_PetComponent_HPP

class UBP_PetComponent_C : public UPetComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    FText PetName;
    class UParticleSystem* PetParticles;
    class UParticleSystemComponent* Emitter;

    void ModifyTemperature(class ASpiderEnemy* Pet);
    void SetGameplayTags(class AFSDPawn* self2);
    void ActivateMaterial(class USkeletalMeshComponent* Mesh);
    void OnLoaded_2EDD9CD4487CCB079DB91DB3612F9E9C(UClass* Loaded);
    void OnDeath(class UHealthComponentBase* HealthComponent);
    void ReceiveBeginPlay();
    void OnDeath_Event_0(class UHealthComponentBase* HealthComponent);
    void ReceiveOwningPlayerChanged();
    void ExecuteUbergraph_BP_PetComponent(int32 EntryPoint);
};

#endif
