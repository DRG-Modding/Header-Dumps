#ifndef UE4SS_SDK_BP_ToxicCatalystComponent_HPP
#define UE4SS_SDK_BP_ToxicCatalystComponent_HPP

class UBP_ToxicCatalystComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class AFSDPawn* OwningPawn;
    class USkeletalMeshComponent* VictimMesh;
    class ABP_ToxicCatalistExplosion_C* DeathExplosion;
    int32 StackAmmount;
    FVector ExplosionLocation;

    void GetFXMeshScale(float& Scale);
    void ReceiveBeginPlay();
    void OnDeath_Event_0(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_ToxicCatalystComponent(int32 EntryPoint);
};

#endif
