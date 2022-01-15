#ifndef UE4SS_SDK_BP_SpringDwarfMiner_HPP
#define UE4SS_SDK_BP_SpringDwarfMiner_HPP

class ABP_SpringDwarfMiner_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UStaticMeshComponent* SM_SpringDwarf_004;
    UStaticMeshComponent* SM_SpringDwarf001_StandAlone1;
    UStaticMeshComponent* Sphere;
    UStaticMeshComponent* SM_SpringDwarf001_Spring;
    UStaticMeshComponent* SM_SpringDwarf001_StandAlone;
    UStaticMeshComponent* SM_SpringDwarf001_Legs;
    UStaticMeshComponent* SM_SpringDwarf001_Torso1;
    UInstantUsable* InstantUsable;
    UCapsuleComponent* Capsule;
    UPhysicsConstraintComponent* PhysicsConstraint;
    UStaticMeshComponent* Cylinder1;
    USceneComponent* DefaultSceneRoot;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ImpulseSpringDwarf();
    void ExecuteUbergraph_BP_SpringDwarfMiner(int32 EntryPoint, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, float CallFunc_RandomFloatInRange_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue);
}

#endif
