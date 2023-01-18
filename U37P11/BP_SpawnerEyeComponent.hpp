#ifndef UE4SS_SDK_BP_SpawnerEyeComponent_HPP
#define UE4SS_SDK_BP_SpawnerEyeComponent_HPP

class UBP_SpawnerEyeComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPrimitiveComponent* EyeCollider;
    float Health;
    class USkeletalMeshComponent* EyeMesh;
    bool IsAlive;

    void OnRep_IsAlive();
    void IsEyeThatWasHit(class UPrimitiveComponent* EyeCollider, bool& WasHit);
    void TakeDamage(float Damage, bool& Died);
    void SetMeshAndCollider(class UPrimitiveComponent* collider, class USkeletalMeshComponent* Mesh, int32 PartOfTotalHealth, float SpawnerHealth);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpawnerEyeComponent(int32 EntryPoint);
};

#endif
