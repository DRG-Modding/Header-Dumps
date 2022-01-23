#ifndef UE4SS_SDK_BP_SpawnerEyeComponent_HPP
#define UE4SS_SDK_BP_SpawnerEyeComponent_HPP

class UBP_SpawnerEyeComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPrimitiveComponent* EyeCollider;
    float Health;
    class USkeletalMeshComponent* EyeMesh;
    bool IsAlive;

    void OnRep_IsAlive(class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
    void IsEyeThatWasHit(class UPrimitiveComponent* EyeCollider, bool& WasHit, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
    void TakeDamage(float Damage, bool& Died, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void SetMeshAndCollider(class UPrimitiveComponent* collider, class USkeletalMeshComponent* Mesh, int32 PartOfTotalHealth, float SpawnerHealth, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SpawnerEyeComponent(int32 EntryPoint);
};

#endif
