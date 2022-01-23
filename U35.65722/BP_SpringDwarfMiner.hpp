#ifndef UE4SS_SDK_BP_SpringDwarfMiner_HPP
#define UE4SS_SDK_BP_SpringDwarfMiner_HPP

class ABP_SpringDwarfMiner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_SpringDwarf_004;
    class UStaticMeshComponent* SM_SpringDwarf001_StandAlone1;
    class UStaticMeshComponent* Sphere;
    class UStaticMeshComponent* SM_SpringDwarf001_Spring;
    class UStaticMeshComponent* SM_SpringDwarf001_StandAlone;
    class UStaticMeshComponent* SM_SpringDwarf001_Legs;
    class UStaticMeshComponent* SM_SpringDwarf001_Torso1;
    class UInstantUsable* InstantUsable;
    class UCapsuleComponent* Capsule;
    class UPhysicsConstraintComponent* PhysicsConstraint;
    class UStaticMeshComponent* Cylinder1;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ImpulseSpringDwarf();
    void ExecuteUbergraph_BP_SpringDwarfMiner(int32 EntryPoint, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
};

#endif
